#include "display_window.hpp"

#include <span>
#include "ge_gpu_backend.hpp"
#include "lcs_mouse.hpp"
#include "lcs_controls.hpp"
#include "lcs_display_menu.hpp"
#include "lcs_menu.hpp"
#include "lcs_render_config.hpp"

#if defined(_WIN32)

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <mutex>
#include <vector>

namespace lcs {
namespace {

HWND g_window{};
bool g_closed{};
bool g_fullscreen{};
WINDOWPLACEMENT g_windowed_placement{};
std::vector<std::uint32_t> g_pixels;
std::uint32_t g_pixel_width{};
std::uint32_t g_pixel_height{};
std::atomic<int> g_wheel{0};
std::atomic<std::int32_t> g_mouse_dx{0};
std::atomic<std::int32_t> g_mouse_dy{0};

void discard_pending_pointer() noexcept {
    g_wheel.store(0, std::memory_order_relaxed);
    g_mouse_dx.store(0, std::memory_order_relaxed);
    g_mouse_dy.store(0, std::memory_order_relaxed);
}

constexpr std::uint32_t kPspSelect = 0x000001u;
constexpr std::uint32_t kPspStart = 0x000008u;
constexpr std::uint32_t kPspUp = 0x000010u;
constexpr std::uint32_t kPspRight = 0x000020u;
constexpr std::uint32_t kPspDown = 0x000040u;
constexpr std::uint32_t kPspLeft = 0x000080u;
constexpr std::uint32_t kPspLTrigger = 0x000100u;
constexpr std::uint32_t kPspRTrigger = 0x000200u;
constexpr std::uint32_t kPspTriangle = 0x001000u;
constexpr std::uint32_t kPspCircle = 0x002000u;
constexpr std::uint32_t kPspCross = 0x004000u;
constexpr std::uint32_t kPspSquare = 0x008000u;

struct KeyBinding {
    int virtual_key;
    std::uint32_t psp_button;
};

constexpr KeyBinding kKeyBindings[] = {
    {VK_SPACE, kPspCross},
    {VK_LSHIFT, kPspSquare},
    {VK_RSHIFT, kPspSquare},
    {'F', kPspTriangle},
    {VK_RETURN, kPspTriangle},
    {'Q', kPspLeft},
    {'E', kPspRight},
    {'H', kPspLTrigger},
    {VK_UP, kPspUp},
    {VK_DOWN, kPspDown},
    {VK_LEFT, kPspLeft},
    {VK_RIGHT, kPspRight},
    {VK_ESCAPE, kPspStart},
    {'V', kPspSelect},
};

constexpr KeyBinding kMouseBindings[] = {
    {VK_LBUTTON, kPspCircle},
    {VK_RBUTTON, kPspRTrigger},
    {VK_MBUTTON, kPspLTrigger},
};

constexpr int kMoveForward = 'W';
constexpr int kMoveBack = 'S';
constexpr int kMoveLeft = 'A';
constexpr int kMoveRight = 'D';

bool key_down(int virtual_key) noexcept {
    return (GetAsyncKeyState(virtual_key) & 0x8000) != 0;
}

bool cursor_in_client(HWND hwnd) noexcept {
    POINT cursor{};
    if (!GetCursorPos(&cursor) || WindowFromPoint(cursor) != hwnd) return false;
    RECT client{};
    if (!GetClientRect(hwnd, &client) || !ScreenToClient(hwnd, &cursor)) return false;
    return PtInRect(&client, cursor) != FALSE;
}

struct XInputGamepad {
    std::uint16_t buttons;
    std::uint8_t left_trigger;
    std::uint8_t right_trigger;
    std::int16_t lx, ly, rx, ry;
};
struct XInputStatePacket {
    std::uint32_t packet;
    XInputGamepad gamepad;
};
using PfnXInputGetState = DWORD(WINAPI *)(DWORD, XInputStatePacket *);

constexpr std::uint16_t kPadDpadUp = 0x0001u;
constexpr std::uint16_t kPadDpadDown = 0x0002u;
constexpr std::uint16_t kPadDpadLeft = 0x0004u;
constexpr std::uint16_t kPadDpadRight = 0x0008u;
constexpr std::uint16_t kPadStart = 0x0010u;
constexpr std::uint16_t kPadBack = 0x0020u;
constexpr std::uint16_t kPadLeftShoulder = 0x0100u;
constexpr std::uint16_t kPadRightShoulder = 0x0200u;
constexpr std::uint16_t kPadA = 0x1000u;
constexpr std::uint16_t kPadB = 0x2000u;
constexpr std::uint16_t kPadX = 0x4000u;
constexpr std::uint16_t kPadY = 0x8000u;

PfnXInputGetState xinput_get_state() noexcept {
    static PfnXInputGetState resolved = []() -> PfnXInputGetState {
        for (const wchar_t *name : {L"xinput1_4.dll", L"xinput1_3.dll", L"xinput9_1_0.dll"}) {
            if (HMODULE module = LoadLibraryW(name)) {
                if (auto function = reinterpret_cast<PfnXInputGetState>(
                        reinterpret_cast<void *>(GetProcAddress(module, "XInputGetState"))))
                    return function;
            }
        }
        return nullptr;
    }();
    return resolved;
}

std::uint8_t stick_to_psp(std::int16_t value, bool invert) noexcept {
    constexpr int kDeadZone = 7849;
    int magnitude = std::abs(static_cast<int>(value));
    if (magnitude <= kDeadZone) return 128u;
    magnitude = (magnitude - kDeadZone) * 32767 / (32767 - kDeadZone);
    int signed_value = value < 0 ? -magnitude : magnitude;
    if (invert) signed_value = -signed_value;
    return static_cast<std::uint8_t>(std::clamp(128 + signed_value * 127 / 32767, 0, 255));
}

void update_cursor_clip(HWND hwnd, bool capture) noexcept {
    if (!capture || hwnd == nullptr || !lcs_camera_hook_enabled() || !lcs_camera_in_use()) {
        ClipCursor(nullptr);
        return;
    }
    RECT client{};
    if (!GetClientRect(hwnd, &client)) return;
    POINT top_left{client.left, client.top};
    POINT bottom_right{client.right, client.bottom};
    ClientToScreen(hwnd, &top_left);
    ClientToScreen(hwnd, &bottom_right);
    const RECT wanted{top_left.x, top_left.y, bottom_right.x, bottom_right.y};
    RECT current{};
    if (GetClipCursor(&current) && EqualRect(&current, &wanted)) return;
    ClipCursor(&wanted);
}

void set_fullscreen(HWND hwnd, bool fullscreen) noexcept {
    if (hwnd == nullptr || fullscreen == g_fullscreen) return;
    const LONG_PTR style = GetWindowLongPtrW(hwnd, GWL_STYLE);
    if (fullscreen) {
        MONITORINFO monitor{};
        monitor.cbSize = sizeof(monitor);
        g_windowed_placement.length = sizeof(g_windowed_placement);
        if (!GetWindowPlacement(hwnd, &g_windowed_placement) ||
            !GetMonitorInfoW(MonitorFromWindow(hwnd, MONITOR_DEFAULTTONEAREST), &monitor))
            return;
        SetWindowLongPtrW(hwnd, GWL_STYLE, (style & ~WS_OVERLAPPEDWINDOW) | WS_POPUP);
        const RECT &area = monitor.rcMonitor;
        SetWindowPos(hwnd, HWND_TOP, area.left, area.top, area.right - area.left,
                     area.bottom - area.top, SWP_NOOWNERZORDER | SWP_FRAMECHANGED);
    } else {
        SetWindowLongPtrW(hwnd, GWL_STYLE, (style & ~WS_POPUP) | WS_OVERLAPPEDWINDOW);
        SetWindowPlacement(hwnd, &g_windowed_placement);
        SetWindowPos(hwnd, nullptr, 0, 0, 0, 0,
                     SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER | SWP_NOOWNERZORDER | SWP_FRAMECHANGED);
    }
    g_fullscreen = fullscreen;
}

void note_host_frame() noexcept {
    host_fps_note_presented_frame();
}

void paint_host_overlay(HDC hdc) noexcept {
    if (hdc == nullptr || g_window == nullptr) return;
    RECT client{};
    GetClientRect(g_window, &client);
    const int client_w = client.right - client.left;
    const int client_h = client.bottom - client.top;
    if (client_w <= 0 || client_h <= 0) return;
    const int font_h = std::max(16, client_h / 36);
    HFONT font = CreateFontW(-font_h, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, ANSI_CHARSET,
                             OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY,
                             DEFAULT_PITCH | FF_DONTCARE, L"Segoe UI");
    HGDIOBJ previous = SelectObject(hdc, font);
    SetBkMode(hdc, TRANSPARENT);
    if (lcs_render_configuration().display.show_fps) {
        char label[24];
        host_fps_format(label, sizeof(label));
        RECT box{12, 12, 12 + font_h * 6, 12 + font_h + 10};
        HBRUSH background = CreateSolidBrush(RGB(8, 12, 28));
        FillRect(hdc, &box, background);
        DeleteObject(background);
        SetTextColor(hdc, RGB(232, 248, 255));
        TextOutA(hdc, 18, 16, label, static_cast<int>(std::strlen(label)));
    }
    if (host_settings_open()) {
        const HostSettingsView view = host_settings_view();
        const int line = font_h + 8;
        const int panel_w = font_h * 22;
        const int panel_h = line * 10;
        const int origin_x = std::max(12, client_w - panel_w - 12);
        const int origin_y = 12;
        RECT panel{origin_x, origin_y, origin_x + panel_w, origin_y + panel_h};
        HBRUSH background = CreateSolidBrush(RGB(8, 12, 28));
        FillRect(hdc, &panel, background);
        DeleteObject(background);
        SetTextColor(hdc, RGB(180, 200, 230));
        TextOutA(hdc, origin_x + 12, origin_y + 8, "HOST SETTINGS", 13);
        TextOutA(hdc, origin_x + 12, origin_y + 8 + line, "F10 CLOSE", 9);
        for (int row = 0; row < 5; ++row) {
            const int y = origin_y + 8 + line * (2 + row);
            if (row == view.selected) {
                RECT highlight{origin_x + 6, y - 2, origin_x + panel_w - 6, y + font_h + 4};
                HBRUSH brush = CreateSolidBrush(RGB(40, 70, 120));
                FillRect(hdc, &highlight, brush);
                DeleteObject(brush);
                SetTextColor(hdc, RGB(255, 255, 255));
            } else {
                SetTextColor(hdc, RGB(170, 190, 220));
            }
            TextOutA(hdc, origin_x + 12, y, view.rows[row], static_cast<int>(std::strlen(view.rows[row])));
        }
        if (view.resolution_pending) {
            SetTextColor(hdc, RGB(220, 180, 80));
            TextOutA(hdc, origin_x + 12, origin_y + 8 + line * 7, "RESTART TO APPLY", 16);
        }
    }
    SelectObject(hdc, previous);
    DeleteObject(font);
}

void blit_stored_frame() noexcept {
    if (g_window == nullptr || g_pixels.empty() || g_pixel_width == 0u || g_pixel_height == 0u) return;
    HDC hdc = GetDC(g_window);
    if (hdc == nullptr) return;
    BITMAPINFO info{};
    info.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    info.bmiHeader.biWidth = static_cast<LONG>(g_pixel_width);
    info.bmiHeader.biHeight = -static_cast<LONG>(g_pixel_height);
    info.bmiHeader.biPlanes = 1;
    info.bmiHeader.biBitCount = 32;
    info.bmiHeader.biCompression = BI_RGB;
    RECT client{};
    GetClientRect(g_window, &client);
    SetStretchBltMode(hdc, HALFTONE);
    SetBrushOrgEx(hdc, 0, 0, nullptr);
    StretchDIBits(hdc, 0, 0, client.right - client.left, client.bottom - client.top, 0, 0,
                 static_cast<int>(g_pixel_width), static_cast<int>(g_pixel_height), g_pixels.data(),
                 &info, DIB_RGB_COLORS, SRCCOPY);
    paint_host_overlay(hdc);
    ReleaseDC(g_window, hdc);
}

LRESULT CALLBACK window_proc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam) {
    const Win32HostKeyDecision host_key = classify_win32_host_key(
        static_cast<std::uint32_t>(message), static_cast<std::uint32_t>(wparam),
        (lparam & (1 << 30)) != 0);
    if (host_key.consume) {
        if (host_key.toggle_settings) {
            const bool was_open = host_settings_open();
            host_settings_handle(HostSettingsKey::Toggle);
            if (was_open) discard_pending_pointer();
        }
        return 0;
    }
    if (message == WM_KEYDOWN) {
        const bool repeat = (lparam & (1 << 30)) != 0;
        if (wparam == VK_F11 && !repeat) {
            set_fullscreen(hwnd, !g_fullscreen);
            host_settings_note_fullscreen(g_fullscreen);
            return 0;
        }
        if (host_settings_open()) {
            if (wparam == VK_UP) host_settings_handle(HostSettingsKey::Up);
            else if (wparam == VK_DOWN) host_settings_handle(HostSettingsKey::Down);
            else if (wparam == VK_LEFT) host_settings_handle(HostSettingsKey::Left);
            else if (wparam == VK_RIGHT) host_settings_handle(HostSettingsKey::Right);
            else if (wparam == VK_ESCAPE && !repeat) {
                host_settings_handle(HostSettingsKey::Close);
                discard_pending_pointer();
            }
            return 0;
        }
    }
    if (message == WM_ACTIVATE) {
        update_cursor_clip(hwnd, LOWORD(wparam) != WA_INACTIVE && HIWORD(wparam) == 0);
        return DefWindowProcW(hwnd, message, wparam, lparam);
    }
    if (message == WM_SIZE || message == WM_MOVE || message == WM_EXITSIZEMOVE) {
        if (GetForegroundWindow() == hwnd) update_cursor_clip(hwnd, true);
        return DefWindowProcW(hwnd, message, wparam, lparam);
    }
    if (message == WM_ENTERSIZEMOVE) {
        update_cursor_clip(hwnd, false);
        return DefWindowProcW(hwnd, message, wparam, lparam);
    }
    if (message == WM_INPUT) {
        UINT size = 0u;
        GetRawInputData(reinterpret_cast<HRAWINPUT>(lparam), RID_INPUT, nullptr, &size,
                        sizeof(RAWINPUTHEADER));
        if (size != 0u && size <= 256u) {
            alignas(8) std::byte buffer[256];
            if (GetRawInputData(reinterpret_cast<HRAWINPUT>(lparam), RID_INPUT, buffer, &size,
                                sizeof(RAWINPUTHEADER)) == size) {
                const RAWINPUT *raw = reinterpret_cast<const RAWINPUT *>(buffer);
                if (raw->header.dwType == RIM_TYPEMOUSE &&
                    (raw->data.mouse.usFlags & MOUSE_MOVE_ABSOLUTE) == 0 &&
                    !host_settings_open()) {
                    g_mouse_dx.fetch_add(raw->data.mouse.lLastX, std::memory_order_relaxed);
                    g_mouse_dy.fetch_add(raw->data.mouse.lLastY, std::memory_order_relaxed);
                }
            }
        }
        return DefWindowProcW(hwnd, message, wparam, lparam);
    }
    if (message == WM_SETCURSOR && LOWORD(lparam) == HTCLIENT && !lcs_menu_active()) {
        SetCursor(nullptr);
        return TRUE;
    }
    if (message == WM_MOUSEWHEEL) {
        if (!host_settings_open())
            g_wheel.fetch_add(GET_WHEEL_DELTA_WPARAM(wparam) / WHEEL_DELTA, std::memory_order_relaxed);
        return 0;
    }
    if (message == WM_DESTROY || message == WM_CLOSE) {
        ClipCursor(nullptr);
        g_closed = true;
        if (message == WM_DESTROY) {
            g_window = nullptr;
            return 0;
        }
    }
    return DefWindowProcW(hwnd, message, wparam, lparam);
}

std::uint32_t unpack_pixel(const std::uint8_t *src, std::uint32_t format) {
    switch (format) {
    case 0u: {  // GU_PSM_5650
        const std::uint16_t value = static_cast<std::uint16_t>(src[0] | (src[1] << 8));
        const std::uint32_t r = (value & 0x1Fu) * 255u / 31u;
        const std::uint32_t g = ((value >> 5u) & 0x3Fu) * 255u / 63u;
        const std::uint32_t b = ((value >> 11u) & 0x1Fu) * 255u / 31u;
        return 0xFF000000u | (r << 16u) | (g << 8u) | b;
    }
    case 1u: {  // GU_PSM_5551
        const std::uint16_t value = static_cast<std::uint16_t>(src[0] | (src[1] << 8));
        const std::uint32_t r = (value & 0x1Fu) * 255u / 31u;
        const std::uint32_t g = ((value >> 5u) & 0x1Fu) * 255u / 31u;
        const std::uint32_t b = ((value >> 10u) & 0x1Fu) * 255u / 31u;
        return 0xFF000000u | (r << 16u) | (g << 8u) | b;
    }
    case 2u: {  // GU_PSM_4444
        const std::uint16_t value = static_cast<std::uint16_t>(src[0] | (src[1] << 8));
        const std::uint32_t r = (value & 0xFu) * 17u;
        const std::uint32_t g = ((value >> 4u) & 0xFu) * 17u;
        const std::uint32_t b = ((value >> 8u) & 0xFu) * 17u;
        return 0xFF000000u | (r << 16u) | (g << 8u) | b;
    }
    default: {  // GU_PSM_8888
        return 0xFF000000u | (static_cast<std::uint32_t>(src[0]) << 16u) |
            (static_cast<std::uint32_t>(src[1]) << 8u) | src[2];
    }
    }
}

std::uint32_t bytes_per_pixel(std::uint32_t format) { return format == 3u ? 4u : 2u; }

}  // namespace

void display_window_init() {
    if (g_window != nullptr) return;
    WNDCLASSW wc{};
    wc.lpfnWndProc = window_proc;
    wc.hInstance = GetModuleHandleW(nullptr);
    wc.lpszClassName = L"LCSNativeWindow";
    wc.hCursor = LoadCursorW(nullptr, MAKEINTRESOURCEW(32512));  // IDC_ARROW
    wc.hIcon = LoadIconW(wc.hInstance, MAKEINTRESOURCEW(1));
    RegisterClassW(&wc);
    const DisplaySurfaceDimensions surface = resolve_window_dimensions();
    g_window = CreateWindowExW(0, wc.lpszClassName, L"LCSNative - GTA: Liberty City Stories",
                               WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
                               static_cast<int>(surface.width), static_cast<int>(surface.height),
                               nullptr, nullptr, wc.hInstance, nullptr);
    if (g_window == nullptr) return;

    RECT outer{};
    RECT client{};
    GetWindowRect(g_window, &outer);
    GetClientRect(g_window, &client);
    const int frame_width = (outer.right - outer.left) - client.right;
    const int frame_height = (outer.bottom - outer.top) - client.bottom;

    RECT work{0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN)};
    SystemParametersInfoW(SPI_GETWORKAREA, 0, &work, 0);
    const int work_width = static_cast<int>(work.right - work.left);
    const int work_height = static_cast<int>(work.bottom - work.top);

    const int client_width = std::clamp(static_cast<int>(surface.width), 1,
                                        std::max(1, work_width - frame_width));
    const int client_height = std::clamp(static_cast<int>(surface.height), 1,
                                         std::max(1, work_height - frame_height));
    const int window_width = client_width + frame_width;
    const int window_height = client_height + frame_height;

    SetWindowPos(g_window, nullptr,
                 static_cast<int>(work.left) + (work_width - window_width) / 2,
                 static_cast<int>(work.top) + (work_height - window_height) / 2,
                 window_width, window_height, SWP_NOZORDER | SWP_NOACTIVATE);
    set_fullscreen(g_window, lcs_render_configuration().display.fullscreen);
    ge_gpu_backend_set_native_window(g_window);
    ShowWindow(g_window, SW_SHOW);
    const RAWINPUTDEVICE mouse{0x01u, 0x02u, 0u, g_window};
    RegisterRawInputDevices(&mouse, 1u, sizeof(mouse));
}

void display_window_attach_gpu_backend() {
    if (g_window != nullptr) ge_gpu_backend_set_native_window(g_window);
}

bool display_window_profile_key_pressed() {
    static bool was_down = false;
    const bool down = g_window != nullptr && GetForegroundWindow() == g_window && key_down('P');
    const bool pressed = down && !was_down;
    was_down = down;
    return pressed;
}

bool display_window_closed() { return g_closed; }

std::atomic<int> g_fullscreen_request{-1};

void apply_fullscreen_request() noexcept {
    const int request = g_fullscreen_request.exchange(-1, std::memory_order_relaxed);
    if (request < 0 || g_window == nullptr) return;
    set_fullscreen(g_window, request != 0);
}

void display_window_request_fullscreen(bool enabled) noexcept {
    g_fullscreen_request.store(enabled ? 1 : 0, std::memory_order_relaxed);
}

void display_window_pump() {
    apply_fullscreen_request();
    if (g_window == nullptr) return;
    MSG msg;
    while (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
}

void display_window_present(psprecomp::Runtime &runtime, std::uint32_t frame_buffer,
                            std::uint32_t buffer_width, std::uint32_t pixel_format,
                            std::uint32_t width, std::uint32_t height) {
    if (g_window == nullptr) return;

    MSG msg;
    while (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
    if (g_closed || g_window == nullptr) return;

    // Guest calls WaitVblankStart way faster than 60Hz (~90k times per 500k
    // dispatches), so cap the actual blit to ~30Hz real time.
    static auto last_present = std::chrono::steady_clock::time_point{};
    const auto now = std::chrono::steady_clock::now();
    if (now - last_present < std::chrono::milliseconds(33)) return;
    last_present = now;

    if (frame_buffer == 0u || width == 0u || height == 0u || buffer_width == 0u) return;
    const std::uint32_t stride_bytes = buffer_width * bytes_per_pixel(pixel_format);
    const std::size_t total_bytes = static_cast<std::size_t>(stride_bytes) * height;
    const std::uint8_t *source = runtime.memory().raw_pointer(frame_buffer, total_bytes);
    if (source == nullptr) return;

    g_pixels.resize(static_cast<std::size_t>(width) * height);
    g_pixel_width = width;
    g_pixel_height = height;
    const std::uint32_t bpp = bytes_per_pixel(pixel_format);
    for (std::uint32_t y = 0; y < height; ++y) {
        const std::uint8_t *row = source + static_cast<std::size_t>(y) * stride_bytes;
        for (std::uint32_t x = 0; x < width; ++x) {
            g_pixels[static_cast<std::size_t>(y) * width + x] = unpack_pixel(row + static_cast<std::size_t>(x) * bpp, pixel_format);
        }
    }

    HDC hdc = GetDC(g_window);
    BITMAPINFO info{};
    info.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    info.bmiHeader.biWidth = static_cast<LONG>(width);
    info.bmiHeader.biHeight = -static_cast<LONG>(height);
    info.bmiHeader.biPlanes = 1;
    info.bmiHeader.biBitCount = 32;
    info.bmiHeader.biCompression = BI_RGB;
    RECT client{};
    GetClientRect(g_window, &client);
    SetStretchBltMode(hdc, HALFTONE);
    SetBrushOrgEx(hdc, 0, 0, nullptr);
    StretchDIBits(hdc, 0, 0, client.right - client.left, client.bottom - client.top,
                 0, 0, static_cast<int>(width), static_cast<int>(height),
                 g_pixels.data(), &info, DIB_RGB_COLORS, SRCCOPY);
    note_host_frame();
    paint_host_overlay(hdc);
    ReleaseDC(g_window, hdc);
}

void display_window_present_rgba(std::span<const std::byte> rgba, std::uint32_t width,
                                 std::uint32_t height) {
    if (g_window == nullptr || width == 0u || height == 0u) return;

    MSG msg;
    while (PeekMessageW(&msg, nullptr, 0, 0, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
    if (g_window == nullptr) return;

    const std::size_t pixel_count = static_cast<std::size_t>(width) * height;
    if (rgba.size() < pixel_count * 4u) return;

    g_pixels.resize(pixel_count);
    g_pixel_width = width;
    g_pixel_height = height;
    const auto *source = reinterpret_cast<const std::uint8_t *>(rgba.data());
    for (std::size_t index = 0u; index < pixel_count; ++index) {
        const std::uint8_t *pixel = source + index * 4u;
        g_pixels[index] = (static_cast<std::uint32_t>(pixel[0]) << 16u) |
                          (static_cast<std::uint32_t>(pixel[1]) << 8u) |
                          static_cast<std::uint32_t>(pixel[2]);
    }

    HDC hdc = GetDC(g_window);
    BITMAPINFO info{};
    info.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    info.bmiHeader.biWidth = static_cast<LONG>(width);
    info.bmiHeader.biHeight = -static_cast<LONG>(height);
    info.bmiHeader.biPlanes = 1;
    info.bmiHeader.biBitCount = 32;
    info.bmiHeader.biCompression = BI_RGB;
    RECT client{};
    GetClientRect(g_window, &client);
    SetStretchBltMode(hdc, HALFTONE);
    SetBrushOrgEx(hdc, 0, 0, nullptr);
    StretchDIBits(hdc, 0, 0, client.right - client.left, client.bottom - client.top,
                  0, 0, static_cast<int>(width), static_cast<int>(height),
                  g_pixels.data(), &info, DIB_RGB_COLORS, SRCCOPY);
    note_host_frame();
    paint_host_overlay(hdc);
    ReleaseDC(g_window, hdc);
}

void display_window_shutdown() {
    ClipCursor(nullptr);
    if (g_window != nullptr) {
        DestroyWindow(g_window);
        g_window = nullptr;
    }
}

HostInputState display_window_input() {
    static std::mutex cache_mutex;
    static HostInputState cached{};
    static std::chrono::steady_clock::time_point cached_at{};
    const std::lock_guard<std::mutex> guard(cache_mutex);
    const auto poll_time = std::chrono::steady_clock::now();
    if (host_settings_open()) discard_pending_pointer();
    if (cached_at.time_since_epoch().count() != 0 &&
        poll_time - cached_at < std::chrono::milliseconds(4))
        return cached;
    cached_at = poll_time;
    if (host_settings_open()) {
        discard_pending_pointer();
        cached = {};
        lcs_camera_set_axes(0, 0);
        lcs_set_host_drive_inputs(false, false);
        return cached;
    }

    HostInputState input{};
    const auto publish = [&]() -> HostInputState {
        lcs_camera_set_axes(input.camera_x, input.camera_y);
        lcs_set_host_drive_inputs(input.accelerate, input.brake);
        cached = input;
        return cached;
    };
    const int wheel = g_wheel.exchange(0, std::memory_order_relaxed);
    const std::int32_t mouse_dx = g_mouse_dx.exchange(0, std::memory_order_relaxed);
    const std::int32_t mouse_dy = g_mouse_dy.exchange(0, std::memory_order_relaxed);
    const bool focused = g_window != nullptr && GetForegroundWindow() == g_window;
    static bool was_captured = false;
    const bool in_game = lcs_camera_in_use() && !lcs_menu_active();
    const bool moving_window = focused && (GetAsyncKeyState(VK_LBUTTON) & 0x8000) != 0 &&
                               GetCapture() != nullptr;
    const bool capture = focused && in_game && !moving_window && !IsIconic(g_window);
    if (capture || was_captured) update_cursor_clip(g_window, capture);
    if (capture != was_captured && focused) {
        POINT cursor{};
        GetCursorPos(&cursor);
        SetCursorPos(cursor.x, cursor.y);
    }
    was_captured = capture;
    const bool driving = lcs_player_in_vehicle();
    const ControlsConfiguration &controls = lcs_render_configuration().controls;

    if (focused) {
        for (const KeyBinding &binding : kKeyBindings)
            if (key_down(binding.virtual_key)) input.buttons |= binding.psp_button;
        if (cursor_in_client(g_window))
            for (const KeyBinding &binding : kMouseBindings)
                if (key_down(binding.virtual_key)) input.buttons |= binding.psp_button;
        if (driving) {
            input.buttons &= ~(kPspCross | kPspRTrigger);
            if (key_down(VK_SPACE)) input.buttons |= kPspRTrigger;
        }

        int move_x = 0;
        int move_y = 0;
        if (key_down(kMoveLeft)) move_x -= 1;
        if (key_down(kMoveRight)) move_x += 1;
        if (!driving) {
            if (key_down(kMoveForward)) move_y -= 1;
            if (key_down(kMoveBack)) move_y += 1;
        } else {
            if (key_down(VK_UP)) move_y -= 1;
            if (key_down(VK_DOWN)) move_y += 1;
        }
        input.accelerate = key_down(kMoveForward);
        input.brake = key_down(kMoveBack);
        const int reach = key_down(VK_LMENU) ? 60 : 127;
        input.analog_x = static_cast<std::uint8_t>(std::clamp(128 + move_x * reach, 0, 255));
        input.analog_y = static_cast<std::uint8_t>(std::clamp(128 + move_y * reach, 0, 255));

        const int sensitivity = static_cast<int>(controls.mouse_sensitivity);
        const auto camera_response = [sensitivity](std::int32_t delta) {
            const double scaled = std::abs(delta) * (sensitivity / 12.0);
            const double magnitude = 127.0 * scaled / (scaled + 12.0);
            return static_cast<int>(std::lround(delta < 0 ? -magnitude : magnitude));
        };
        input.camera_x = camera_response(mouse_dx);
        input.camera_y = camera_response(-mouse_dy);
        if (capture) lcs_add_mouse_camera_delta(mouse_dx, mouse_dy);
        if (controls.invert_camera_y) input.camera_y = -input.camera_y;
    }

    static int wheel_hold = 0;
    static std::uint32_t wheel_button = 0u;
    if (focused && wheel != 0) {
        if (lcs_player_aiming()) {
            wheel_button = wheel > 0 ? kPspSquare : kPspCross;
            wheel_hold = 8;
        } else {
            wheel_button = wheel > 0 ? kPspLeft : kPspRight;
            wheel_hold = 4;
        }
    }
    if (wheel_hold > 0) {
        --wheel_hold;
        input.buttons |= wheel_button;
    }

    if (!focused) return publish();
    if (const PfnXInputGetState get_state = xinput_get_state()) {
        XInputStatePacket pad{};
        if (get_state(0u, &pad) == ERROR_SUCCESS) {
            const std::uint16_t b = pad.gamepad.buttons;
            if (b & kPadA) input.buttons |= kPspCross;
            if (b & kPadX) input.buttons |= kPspSquare;
            if (b & kPadY) input.buttons |= kPspTriangle;
            if (b & kPadB) input.buttons |= kPspCircle;
            if (b & kPadLeftShoulder) input.buttons |= kPspLTrigger;
            if (b & kPadRightShoulder) input.buttons |= kPspRTrigger;
            if (b & kPadStart) input.buttons |= kPspStart;
            if (b & kPadBack) input.buttons |= kPspSelect;
            if (b & kPadDpadUp) input.buttons |= kPspUp;
            if (b & kPadDpadDown) input.buttons |= kPspDown;
            if (b & kPadDpadLeft) input.buttons |= kPspLeft;
            if (b & kPadDpadRight) input.buttons |= kPspRight;
            if (!driving) {
                if (pad.gamepad.left_trigger > 64u) input.buttons |= kPspLTrigger;
                if (pad.gamepad.right_trigger > 64u) input.buttons |= kPspRTrigger;
            }
            if (pad.gamepad.right_trigger > 64u) input.accelerate = true;
            if (pad.gamepad.left_trigger > 64u) input.brake = true;

            const std::uint8_t pad_x = stick_to_psp(pad.gamepad.lx, false);
            const std::uint8_t pad_y = stick_to_psp(pad.gamepad.ly, true);
            if (pad_x != 128u || pad_y != 128u) {
                input.analog_x = pad_x;
                input.analog_y = pad_y;
            }
            const int camera_x = stick_to_psp(pad.gamepad.rx, false) - 128;
            int camera_y = stick_to_psp(pad.gamepad.ry, false) - 128;
            if (controls.invert_camera_y) camera_y = -camera_y;
            if (camera_x != 0 || camera_y != 0) {
                input.camera_x = std::clamp(camera_x, -127, 127);
                input.camera_y = std::clamp(camera_y, -127, 127);
            }
        }
    }
    return publish();
}

}  // namespace lcs

#endif  // _WIN32
