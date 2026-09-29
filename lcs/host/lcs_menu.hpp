#pragma once
#include "psprecomp/runtime.hpp"

#include <cstdint>

namespace lcs {

void lcs_menu_init(psprecomp::Runtime &runtime);
[[nodiscard]] bool lcs_menu_active();
void lcs_menu_begin();
void lcs_menu_end();
void lcs_menu_enqueue();
void lcs_set_ge_command(std::uint32_t address);
[[nodiscard]] bool lcs_menu_command();

}
