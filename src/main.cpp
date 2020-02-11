#include <iostream>
#include "capture.hpp"

capture(
        struct test {
            int id;
        };)

capture(
        struct test2 {
            int id;
        };)



int main() {
    std::cout << get_definition<4>() << std::endl;
    return 0;
}
