#include "lcs_menu.hpp"

namespace lcs {
namespace {

psprecomp::Runtime *g_runtime{};
std::uint32_t g_pending_begin{};
std::uint32_t g_pending_end{};
std::uint32_t g_menu_begin{};
std::uint32_t g_menu_end{};
std::uint32_t g_command{};

std::uint32_t ge_list_write_pointer() {
    return g_runtime->memory().load32(0x08B8EBD0u) & 0x0FFFFFFFu;
}

}  // namespace

void lcs_menu_init(psprecomp::Runtime &runtime) { g_runtime = &runtime; }

bool lcs_menu_active() {
    return g_runtime != nullptr && g_runtime->memory().load8(0x08B8EE51u) != 0u;
}

void lcs_menu_begin() { g_pending_begin = ge_list_write_pointer(); }

void lcs_menu_end() { g_pending_end = ge_list_write_pointer(); }

void lcs_menu_enqueue() {
    g_menu_begin = g_pending_begin;
    g_menu_end = g_pending_end;
    g_pending_begin = g_pending_end = 0u;
}

void lcs_set_ge_command(std::uint32_t address) { g_command = address; }

bool lcs_menu_command() { return g_command >= g_menu_begin && g_command < g_menu_end; }

}
