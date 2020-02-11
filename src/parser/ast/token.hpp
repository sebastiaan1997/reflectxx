#ifndef REFLECT_TOKEN_HPP
#define REFLECT_TOKEN_HPP
#include <string_view>

namespace rf::ast {
    enum class TokenType {
        identifier,
        keyword,
        int_literal,
        float_literal,
        char_literal,
        string_literal,
        code_block
    };





    class Token {
    private:
        const  TokenType _tokenType;
        const std::string_view _src;
        const std::size_t _startPosition;
        const std::size_t _endPosition;


    public:
        constexpr Token(TokenType tokenType, std::string_view src, std::size_t startPosition, std::size_t endPosition):
            _src(src),
            _tokenType(tokenType),
            _startPosition(startPosition),
            _endPosition(endPosition) {



        }
        [[nodiscard]]
        constexpr TokenType tokenType() const noexcept {
            return this->_tokenType;
        }

        friend constexpr bool operator == (const Token& lhs, const Token& rhs) noexcept;
    };

    constexpr bool operator == (const Token& lhs, const Token& rhs) noexcept  {
        return lhs._src == rhs._src;
    }
}







#endif //REFLECT_TOKEN_HPP
