#pragma once

#include <cstdint>

namespace lcs {

[[nodiscard]] bool lcs_camera_hook_enabled() noexcept;
[[nodiscard]] int lcs_camera_axis_x() noexcept;
[[nodiscard]] int lcs_camera_axis_y() noexcept;
void lcs_camera_set_axes(int x, int y) noexcept;
[[nodiscard]] bool lcs_camera_in_use() noexcept;
[[nodiscard]] bool lcs_player_aiming() noexcept;

[[nodiscard]] std::uint32_t lcs_accelerate_pad_offset() noexcept;
[[nodiscard]] std::uint32_t lcs_brake_pad_offset() noexcept;
[[nodiscard]] bool lcs_host_accelerate() noexcept;
[[nodiscard]] bool lcs_host_brake() noexcept;
void lcs_set_host_drive_inputs(bool accelerate, bool brake) noexcept;
void lcs_note_vehicle_control_read() noexcept;
[[nodiscard]] bool lcs_player_in_vehicle() noexcept;

}
