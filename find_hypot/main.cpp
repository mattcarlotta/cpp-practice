#include "debug.hpp"
#include <cmath>
#include <iostream>
#include <string>

#define log(x...)                                                                                                      \
    std::cout << __FUNCTION__ << ":" << __LINE__ << " -> " << #x << "=";                                               \
    debug::logger(x);

// better for templates
using std::cin;
using std::cout;

int main() {
    double a;
    double b;
    double c;

    cout << "Enter Side A of triangle: ";
    cin >> a;

    cout << "Enter Side B of triangle: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Side C is: " << c << '\n';

    return 0;
}
