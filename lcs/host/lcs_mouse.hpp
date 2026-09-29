#pragma once

namespace lcs {

[[nodiscard]] float lcs_camera_smoothing(float keep) noexcept;

[[nodiscard]] float lcs_mouse_camera_turn_speed(float game_speed, float timestep) noexcept;

[[nodiscard]] float lcs_mouse_camera_pitch_speed(float game_speed, float timestep) noexcept;

[[nodiscard]] float lcs_mouse_camera_turn_angle(float game_angle) noexcept;

[[nodiscard]] float lcs_mouse_camera_pitch_angle(float game_angle) noexcept;

[[nodiscard]] float lcs_mouse_aim_turn_angle(float game_angle, float fov) noexcept;

[[nodiscard]] float lcs_mouse_aim_pitch_angle(float game_angle, float fov) noexcept;

[[nodiscard]] float lcs_mouse_vehicle_camera_axis_x(float game_axis) noexcept;

[[nodiscard]] float lcs_mouse_vehicle_camera_axis_y(float game_axis) noexcept;

void lcs_add_mouse_camera_delta(int dx, int dy) noexcept;

void lcs_camera_tick() noexcept;

}
