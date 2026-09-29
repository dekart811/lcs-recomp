#pragma once

#include <cstdint>

namespace psprecomp {
class Runtime;
}

namespace lcs {

inline constexpr std::uint32_t kLangTab = 9u;
inline constexpr std::uint32_t kLangPage = 6u;
inline constexpr std::int32_t kTabCount = 9;
inline constexpr std::int32_t kTabEntrySpanish = 5;

void lcs_install_lang(psprecomp::Runtime &runtime);
void lcs_restore_lang(psprecomp::Runtime &runtime, std::uint32_t lang) noexcept;

}
