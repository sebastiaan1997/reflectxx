cmake_minimum_required(VERSION 3.16)
project(reflect)

set(CMAKE_CXX_STANDARD 20)

add_executable(reflect src/main.cpp src/capture.hpp src/define_reflect.hpp src/hash.hpp src/parser/function_definition.hpp src/parser/definition_base.hpp src/parser/ast/token.hpp src/parser/ast/keyword_token.hpp src/parser/parser.hpp src/parser/ast/bracked_pair.hpp)