#include <array>
#include <cctype>
#include <cstdint>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace {

struct Glyph {
    char character{};
    std::array<std::uint8_t, 7> rows{};
};

std::string trim(std::string line) {
    while (!line.empty() && std::isspace(static_cast<unsigned char>(line.front()))) line.erase(line.begin());
    while (!line.empty() && std::isspace(static_cast<unsigned char>(line.back()))) line.pop_back();
    return line;
}

bool pack_row(const std::string &row, std::uint8_t &bits) {
    if (row.size() != 5u) return false;
    bits = 0u;
    for (int column = 0; column < 5; ++column) {
        const char cell = row[static_cast<std::size_t>(column)];
        if (cell != '.' && cell != '#') return false;
        if (cell == '#') bits = static_cast<std::uint8_t>(bits | (0x10u >> column));
    }
    return true;
}

std::vector<Glyph> parse_font(const std::string &text) {
    std::vector<Glyph> glyphs;
    Glyph current{};
    bool in_glyph = false;
    int rows = 0;
    int line_number = 0;
    std::size_t cursor = 0u;
    while (cursor <= text.size()) {
        const std::size_t end = text.find('\n', cursor);
        std::string raw = text.substr(cursor, (end == std::string::npos ? text.size() : end) - cursor);
        if (!raw.empty() && raw.back() == '\r') raw.pop_back();
        ++line_number;
        const std::string line = trim(raw);
        const bool skip = line.empty() || (line.front() == '#' && line.size() != 5u);
        if (!skip) {
            if (line.rfind("char ", 0) == 0) {
                if (in_glyph) {
                    std::cerr << "line " << line_number << ": glyph '" << current.character << "' is short\n";
                    return {};
                }
                const std::string token = trim(line.substr(5));
                if (token.size() != 3u || token.front() != '\'' || token.back() != '\'') {
                    std::cerr << "line " << line_number << ": expected char 'X'\n";
                    return {};
                }
                current = Glyph{};
                current.character = token[1];
                in_glyph = true;
                rows = 0;
            } else if (!in_glyph) {
                std::cerr << "line " << line_number << ": row without a char line\n";
                return {};
            } else if (!pack_row(line, current.rows[static_cast<std::size_t>(rows)])) {
                std::cerr << "line " << line_number << ": expected 5 '.' or '#'\n";
                return {};
            } else if (++rows == 7) {
                glyphs.push_back(current);
                in_glyph = false;
            }
        }
        if (end == std::string::npos) break;
        cursor = end + 1u;
    }
    if (in_glyph) {
        std::cerr << "glyph '" << current.character << "' is short\n";
        return {};
    }
    if (glyphs.empty()) std::cerr << "font has no glyphs\n";
    return glyphs;
}

std::string render(const std::vector<Glyph> &glyphs) {
    int index[128];
    for (int &slot : index) slot = -1;
    for (std::size_t slot = 0; slot < glyphs.size(); ++slot) {
        const unsigned char character = static_cast<unsigned char>(glyphs[slot].character);
        if (character < 128u) index[character] = static_cast<int>(slot);
        if (glyphs[slot].character >= 'A' && glyphs[slot].character <= 'Z')
            index[static_cast<unsigned char>(glyphs[slot].character - 'A' + 'a')] = static_cast<int>(slot);
    }
    std::string out;
    out += "#pragma once\n#include <array>\n#include <cstdint>\n\nnamespace lcs {\n";
    out += "inline constexpr std::array<std::array<std::uint8_t, 7>, " + std::to_string(glyphs.size()) +
           "> kGlyph5x7 = {{\n";
    for (const Glyph &glyph : glyphs) {
        const std::string shown = glyph.character == ' ' ? "space" : std::string(1, glyph.character);
        out += "    /* " + shown + " */ {{";
        for (int row = 0; row < 7; ++row) {
            char hex[8];
            std::snprintf(hex, sizeof(hex), "0x%02X%s", glyph.rows[static_cast<std::size_t>(row)],
                          row == 6 ? "" : ", ");
            out += hex;
        }
        out += "}},\n";
    }
    out += "}};\ninline constexpr int kGlyphIndex[128] = {\n    ";
    for (int slot = 0; slot < 128; ++slot) {
        out += std::to_string(index[slot]);
        if (slot != 127) out += ", ";
    }
    out += "\n};\n}\n";
    return out;
}

}  // namespace

int main(int argc, char **argv) {
    if (argc != 3) {
        std::cerr << "usage: pack_font5x7 font5x7.txt host_font_5x7.hpp\n";
        return 1;
    }
    std::ifstream input(argv[1]);
    if (!input) {
        std::cerr << "cannot read " << argv[1] << '\n';
        return 1;
    }
    const std::string text((std::istreambuf_iterator<char>(input)), std::istreambuf_iterator<char>());
    const std::vector<Glyph> glyphs = parse_font(text);
    if (glyphs.empty()) return 1;
    std::ofstream output(argv[2], std::ios::trunc);
    if (!output) {
        std::cerr << "cannot write " << argv[2] << '\n';
        return 1;
    }
    output << render(glyphs);
    return output ? 0 : 1;
}
