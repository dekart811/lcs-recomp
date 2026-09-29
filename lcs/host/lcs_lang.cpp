#include "lcs_lang.hpp"

#include "psprecomp/runtime.hpp"

#include <array>

namespace lcs {

namespace {

using TabGrid = std::array<std::array<std::int32_t, 4>, kTabCount>;

constexpr TabGrid kTabGrid{{
    {-1, 6, 5, 2}, {-1, 7, 1, 3}, {-1, 8, 2, 4}, {-1, 8, 3, 5}, {-1, 9, 4, 1},
    {1, -1, 9, 7}, {2, -1, 6, 8}, {4, -1, 7, 9}, {5, -1, 8, 6},
}};

constexpr TabGrid kTabGridSpanish{{
    {-1, 6, 5, 2}, {-1, 7, 1, 3}, {-1, 8, 2, 4}, {-1, 9, 3, 5}, {-1, 9, 4, 1},
    {1, -1, 9, 7}, {2, -1, 6, 8}, {3, -1, 7, 9}, {4, -1, 8, 6},
}};

void install_tabs(psprecomp::Runtime &runtime, std::uint32_t table, const TabGrid &grid) {
    // FEH_LAN
    constexpr std::uint32_t kLangKey = 0x08B31C38u;
    auto &memory = runtime.memory();
    for (std::uint32_t index = 1u; index <= grid.size(); ++index) {
        const std::uint32_t entry = table + index * 24u;
        for (std::uint32_t i = 0u; i < 4u; ++i)
            memory.store32(entry + 0x08u + i * 4u, static_cast<std::uint32_t>(grid[index - 1u][i]));
    }
    const std::uint32_t lang = table + kLangTab * 24u;
    memory.store32(lang + 0x00u, kLangTab);
    memory.store32(lang + 0x04u, kLangKey);
}

}

void lcs_install_lang(psprecomp::Runtime &runtime) {
    install_tabs(runtime, 0x08B58F14u, kTabGrid);
    install_tabs(runtime, 0x08B58FECu, kTabGridSpanish);
}

void lcs_restore_lang(psprecomp::Runtime &runtime, std::uint32_t lang) noexcept {
    constexpr std::uint32_t kLang = 0x08B59B5Cu;
    constexpr std::uint32_t kLangReload = 0x08B58DE0u;
    if (lang >= 5u) return;
    runtime.memory().store32(kLang, lang);
    runtime.memory().store8(kLangReload, 1u);
}

}
