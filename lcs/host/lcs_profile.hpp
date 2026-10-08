// LCS (GTA: Liberty City Stories) kernel HLE.
#pragma once
#include "psprecomp/runtime.hpp"

#include <cstdint>

namespace lcs {

void install_profile(psprecomp::Runtime &runtime, std::uint32_t user_arena_start);
void set_wall_clock_limit(double seconds);
void ge_worker_shutdown();
}
