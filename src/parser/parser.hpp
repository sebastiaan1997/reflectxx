#ifndef REFLECT_PARSER_HPP
#define REFLECT_PARSER_HPP


#include <cstddef>
#include <string_view>


namespace rf {
    constexpr auto parse(std::string_view src) {

    }
    constexpr auto find_bracked_blocks(std::string_view src) noexcept {
        for(std::size_t i = 0; i < src.size(); i++) {
            const char& c = src[i];
            if(c == '{') {



            }
            if(c == '}') {
                return

            }
        }

        return nullptr;



    }




}
#endif //REFLECT_PARSER_HPP
