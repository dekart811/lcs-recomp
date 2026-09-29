#include "lcs_display_menu.hpp"
#include "lcs_render_config.hpp"

#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

namespace lcs {
void display_window_request_fullscreen(bool) noexcept {}
}

namespace {

int fail(const char *message) {
    std::cerr << "FAIL " << message << '\n';
    return 1;
}

int menu_keys() {
    using namespace lcs;
    if (host_settings_open()) return fail("menu started open");
    if (!host_settings_handle(HostSettingsKey::Toggle) || !host_settings_open())
        return fail("toggle did not open");
    const HostSettingsView opened = host_settings_view();
    if (opened.selected != 0) return fail("initial selection");
    const char *labels[]{"View distance", "Fullscreen", "Resolution", "FPS counter", "Frame rate"};
    for (const char *label : labels) {
        bool found = false;
        for (const char (&row)[48] : opened.rows)
            if (std::string(row).find(label) != std::string::npos) found = true;
        if (!found) return fail(label);
    }
    if (!host_settings_handle(HostSettingsKey::Up)) return fail("up");
    const int moved = host_settings_view().selected;
    if (moved == opened.selected) return fail("up did not move");
    if (!host_settings_handle(HostSettingsKey::Down)) return fail("down");
    if (host_settings_view().selected != opened.selected) return fail("down did not return");
    if (!host_settings_handle(HostSettingsKey::Close) || host_settings_open())
        return fail("close");
    std::cout << "open=1 moved=" << moved << " returned=0 closed=1 rows=5\n";
    return 0;
}

int present_policy() {
    using namespace lcs;
    if (!host_settings_handle(HostSettingsKey::Toggle)) return fail("open");
    const Dx12FramePresentDecision open = decide_dx12_frame_present(true);
    if (!open.present_directly) return fail("menu did not present directly");
    if (open.map_full_frame_readback) return fail("menu mapped a full-frame readback");
    if (!open.composite_settings) return fail("menu was not composited");
    if (open.composite_fps) return fail("menu turned the fps counter on");
    if (std::string(open.settings.rows[0]).find("View distance") == std::string::npos)
        return fail("missing view distance");
    if (std::string(open.settings.rows[1]).find("Fullscreen") == std::string::npos)
        return fail("missing fullscreen");
    if (std::string(open.settings.rows[2]).find("Resolution") == std::string::npos)
        return fail("missing resolution");
    if (std::string(open.settings.rows[3]).find("FPS counter") == std::string::npos)
        return fail("missing fps");
    if (std::string(open.settings.rows[4]).find("Frame rate") == std::string::npos)
        return fail("missing frame rate");
    std::vector<std::uint8_t> rgba(static_cast<std::size_t>(kSettingsOverlayWidth) *
                                   kSettingsOverlayHeight * 4u);
    rasterize_settings_overlay(open.settings, rgba.data(), kSettingsOverlayWidth, kSettingsOverlayHeight);
    std::size_t text_pixels = 0u;
    for (std::size_t index = 0u; index + 3u < rgba.size(); index += 4u) {
        if (rgba[index + 3u] == 255u && rgba[index] > 80u) ++text_pixels;
    }
    if (text_pixels < 40u) return fail("settings view was not painted into the frame");
    if (!host_settings_handle(HostSettingsKey::Close)) return fail("close");
    const Dx12FramePresentDecision closed = decide_dx12_frame_present(true);
    if (!closed.present_directly || closed.map_full_frame_readback || closed.composite_settings)
        return fail("closing the menu disabled direct presentation");
    std::cout << "direct=1 readback=0 composite=1 text_pixels=" << text_pixels
              << " closed_direct=1 closed_readback=0 closed_composite=0\n";
    return 0;
}

int fps_counter() {
    using namespace lcs;
    lcs_set_show_fps(false);
    const Dx12FramePresentDecision hidden = decide_dx12_frame_present(true);
    if (!hidden.present_directly || hidden.map_full_frame_readback || hidden.composite_fps)
        return fail("hidden counter changed presentation");
    lcs_set_show_fps(true);
    const Dx12FramePresentDecision shown = decide_dx12_frame_present(true);
    if (!shown.present_directly || shown.map_full_frame_readback || !shown.composite_fps)
        return fail("counter did not composite on the direct present");
    if (shown.composite_settings) return fail("counter opened the menu");
    char label[24];
    host_fps_format(label, sizeof(label));
    if (std::string(label).find("FPS") == std::string::npos) return fail("fps label");
    std::vector<std::uint8_t> rgba(static_cast<std::size_t>(kFpsOverlayWidth) *
                                   kFpsOverlayHeight * 4u);
    rasterize_fps_overlay(rgba.data(), kFpsOverlayWidth, kFpsOverlayHeight);
    std::size_t text_pixels = 0u;
    std::size_t badge_pixels = 0u;
    for (std::size_t index = 0u; index + 3u < rgba.size(); index += 4u) {
        if (rgba[index + 3u] == 255u && rgba[index] > 200u) ++text_pixels;
        if (rgba[index + 3u] == 210u) ++badge_pixels;
    }
    if (text_pixels < 40u) return fail("fps text was not painted");
    if (badge_pixels == 0u) return fail("fps badge was transparent");
    lcs_set_show_fps(false);
    const Dx12FramePresentDecision closed = decide_dx12_frame_present(true);
    if (!closed.present_directly || closed.map_full_frame_readback || closed.composite_fps)
        return fail("turning the counter off left it on the frame");
    std::cout << "hidden_direct=1 shown_direct=1 shown_readback=0 shown_composite=1"
                 " text_pixels=" << text_pixels << " closed_composite=0\n";
    return 0;
}

int f10_key() {
    using namespace lcs;
    const Win32HostKeyDecision sys_down =
        classify_win32_host_key(kWin32SysKeyDown, kWin32VkF10, false);
    const Win32HostKeyDecision sys_up =
        classify_win32_host_key(kWin32SysKeyUp, kWin32VkF10, false);
    const Win32HostKeyDecision key_down =
        classify_win32_host_key(kWin32KeyDown, kWin32VkF10, false);
    const Win32HostKeyDecision key_up =
        classify_win32_host_key(kWin32KeyUp, kWin32VkF10, false);
    const Win32HostKeyDecision system_menu =
        classify_win32_host_key(kWin32SysCommand, kWin32ScKeyMenu, false);
    if (!sys_down.consume || !sys_down.toggle_settings) return fail("system F10 press");
    if (!sys_up.consume || sys_up.toggle_settings) return fail("system F10 release");
    if (!key_down.consume || !key_down.toggle_settings) return fail("F10 press");
    if (!key_up.consume || key_up.toggle_settings) return fail("F10 release");
    if (!system_menu.consume || system_menu.toggle_settings) return fail("system key menu");
    std::cout << "sys_down=consume+toggle sys_up=consume key_down=consume+toggle"
                 " key_up=consume syscommand=consume\n";
    return 0;
}

}  // namespace

int main(int argc, char **argv) {
    if (argc != 2) return 2;
    const std::string mode = argv[1];
    if (mode == "menu") return menu_keys();
    if (mode == "present") return present_policy();
    if (mode == "f10") return f10_key();
    if (mode == "fps") return fps_counter();
    return 2;
}
