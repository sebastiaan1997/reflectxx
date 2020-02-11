#ifndef REFLECT_CAPTURE_HPP
#define REFLECT_CAPTURE_HPP

#include <string_view>
#include <optional>


template<int LINE>
constexpr std::optional<std::string_view> get_definition(){
    return {};
}

#define capture(INPUT)\
    template<>\
    constexpr std::optional<std::string_view> get_definition<__LINE__>(){\
        return #INPUT;\
    }






#endif //REFLECT_CAPTURE_HPP