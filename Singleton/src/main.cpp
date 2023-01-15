#include "Sun.h"
#include <iostream>

int main() {
    Sun &s0 = Sun::getInstance();
    Sun &s1 = Sun::getInstance();

    // Sun s2 = s1;

    std::cout << &s0 << std::endl;
    std::cout << &s1 << std::endl;
    // std::cout << &s2 << std::endl;

    return 0;
}
