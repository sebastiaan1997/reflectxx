#ifndef REFLECT_DEFINITION_BASE_HPP
#define REFLECT_DEFINITION_BASE_HPP

#include <string_view>

namespace rf {
    class DefinitionBase {
    private:
        std::string_view _file;
        std::size_t _line_number;
        std::string_view _src;
    protected:
        constexpr DefinitionBase(std::string_view file, std::size_t line_number, std::string_view src):
            _file(file),
            _line_number(line_number),
            _src(src) {

        }
        [[nodiscard]]
        constexpr std::string_view src() const noexcept {
            return this->_src;
        }
    public:
        DefinitionBase() = delete;

        [[nodiscard]]
        constexpr std::string_view file() const noexcept {
            return this->_file;
        }
        [[nodiscard]]
        constexpr std::size_t line_number() const noexcept {
            return this->_line_number;
        }

        

    };
}
#endif //REFLECT_DEFINITION_BASE_HPP
