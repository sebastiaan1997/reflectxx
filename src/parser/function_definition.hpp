#ifndef REFLECT_FUNCTION_DEFINITION_HPP
#define REFLECT_FUNCTION_DEFINITION_HPP

#include <cstddef>

#include <string_view>

namespace rf {

    class ParameterDefinition;

    class FunctionDefinition {
    private:
        const std::string_view _src;
        friend class ParameterDefinition;
    public:
        FunctionDefinition() = delete;
        constexpr FunctionDefinition(std::size_t line, std::string_view file, std::string_view src): _src(src){

        }
    };
    class ParameterDefinition {
    private:
        std::string_view _src;
    public:
        ParameterDefinition(std::string_view src):
            _src(src) {


        }
        [[nodiscard]]
        constexpr bool is_const() const noexcept {
            if(this->_src.find("const")){
                // this->_src.
            }
            return false;
        }

        constexpr std::string_view type() const noexcept {
            for(const auto& c: this->_src) {

            }
        }





    };


}
#endif //REFLECT_FUNCTION_DEFINITION_HPP
