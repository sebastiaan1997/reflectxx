#ifndef REFLECT_HASH_HPP
#define REFLECT_HASH_HPP
#include <cstddef>

#include <string_view>

namespace rf {
    template<typename T>
    std::size_t hash() {}
    template<>
    std::size_t hash<std::string_view>()


}
#endif //REFLECT_HASH_HPP
