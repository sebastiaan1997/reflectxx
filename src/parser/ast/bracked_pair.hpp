#ifndef REFLECT_BRACKED_PAIR_HPP
#define REFLECT_BRACKED_PAIR_HPP

#include <cstddef>

#include <tuple>
#include <optional>

namespace rf {

    constexpr std::optional<std::pair<std::size_t, std::size_t>> find_pair(std::pair<std::size_t, std::size_t> delimiters, std::string_view src, int offset = 0) noexcept {
        std::size_t start = 0;
        std::size_t depth = 0;
        for (std::size_t i = 0; i < src.size(); i++) {
            const char& c = src[i];
            if(c == delimiters.first) {
                if(depth == 0) {
                    start = i;
                }
                depth++;
            }
            if(c == delimiters.second) {
                if (depth == 1) {
                    return BracketPair(
                            std::string_view(&src[start], i - start),
                            offset + start,
                            offset + i
                            );
                }
                depth--;
            }
        }
        return {};
    }




}

#endif //REFLECT_BRACKED_PAIR_HPP
