#include "logger.h"
#include <iostream>

#define debug(x...)                                                                                                    \
    std::cout << __FUNCTION__ << ":" << __LINE__ << " -> " << #x << "=";                                               \
    logger(x);

int main() {
    const double PI = 3.14159;
    double radius = 20;
    double circum = 2 * PI * radius;

    debug(circum);

    return 0;
}
