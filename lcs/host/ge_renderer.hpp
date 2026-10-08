#pragma once

#include "psprecomp/guest_memory.hpp"

#include <array>
#include <cstdint>
#include <string>

namespace lcs {

struct GeTransformState {
    std::array<float, 96> bones{};
    std::array<float, 12> world{};
    std::array<float, 12> view{};
    std::array<float, 16> projection{};
    std::array<float, 12> texture{};
    std::array<float, 8> morph_weights{};
    std::uint32_t bone_cursor{};
    std::uint32_t world_cursor{};
    std::uint32_t view_cursor{};
    std::uint32_t projection_cursor{};
    std::uint32_t texture_cursor{};
};

void reset_ge_transform_state(GeTransformState &state) noexcept;
void update_ge_transform_state(GeTransformState &state, std::uint32_t command,
                               std::uint32_t data) noexcept;

struct GeBoundingBoxResult {
    bool visible{};
    std::uint32_t next_vertex_address{};
    std::uint32_t next_index_address{};
};

struct GeRenderStats {
    std::uint32_t next_vertex_address{};
    std::uint32_t next_index_address{};
};

bool test_ge_bounding_box(const psprecomp::GuestMemory &memory,
                          const std::array<std::uint32_t, 256> &commands,
                          const GeTransformState &transform,
                          std::uint32_t vertex_address,
                          std::uint32_t index_address,
                          std::uint32_t count,
                          GeBoundingBoxResult &result,
                          std::string &error);

bool render_ge_primitive(psprecomp::GuestMemory &memory,
                         const std::array<std::uint32_t, 256> &commands,
                         const GeTransformState &transform,
                         std::uint32_t vertex_address,
                         std::uint32_t index_address,
                         std::uint32_t primitive_data,
                         GeRenderStats &stats,
                         std::string &error,
                         std::uint32_t logical_primitive_count = 1u,
                         std::uint64_t draw_state_revision = 0u,
                         std::uint64_t camera_state_revision = 0u,
                         std::uint64_t lighting_state_revision = 0u);

void flush_ge_deferred_rasterization(psprecomp::GuestMemory &memory);

}