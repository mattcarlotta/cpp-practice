#include "debug.hpp"
#include <iostream>

#define log(x...)                                                                                                      \
    std::cout << __FUNCTION__ << ":" << __LINE__ << " -> " << #x << "=";                                               \
    debug::logger(x);

int main() {
    const double PI = 3.14159;
    double radius = 20;
    double circum = 2 * PI * radius;

    log(circum);

    return 0;
}
