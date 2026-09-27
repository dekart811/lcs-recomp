#pragma once

#include <chrono>

namespace lcs {

[[nodiscard]] bool lcs_frame_limiter_unlocked() noexcept;

void precise_sleep_until(std::chrono::steady_clock::time_point deadline) noexcept;

}
