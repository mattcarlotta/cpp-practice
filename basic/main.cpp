#include "debug.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

#define log(x...)                                                                                                      \
    std::cout << __FUNCTION__ << ":" << __LINE__ << " -> " << #x << "=";                                               \
    debug::logger(x);

// less favorable
// typedef std::string text_t;

// better for templates
using std::cin;
using std::cout;
using text_t = std::string;

int main() {
    const double PI = 3.14159;
    double radius = 20;
    double circum = 2 * PI * radius;
    log(circum);

    int num = 0;
    ++num;
    log(num);

    // type cast
    double x = (int)3.14;
    log(x);

    int c = 8;
    int q = 10;
    double s = c / (double)q * 100;
    log(s);
    int maxNum = std::max(c, q);
    log(maxNum);

    // cmath
    int qPow = pow(2, 3);
    log(qPow);
    int qSqrt = sqrt(qPow);
    log(qSqrt);

    text_t firstName = "Matt";
    log(firstName);

    text_t age;
    cout << "What's your age? ";
    cin >> age;
    log(age);

    text_t fullName;

    cout << "What's your full name? ";
    // cin >> fullName;
    std::getline(cin >> std::ws, fullName);

    fullName = "Hello, " + fullName;
    log(fullName);

    return 0;
}
