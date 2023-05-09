#include "debug.hpp"
#include <cmath>
#include <iostream>
#include <string>

#define log(x...)                                                                                                      \
    std::cout << __FUNCTION__ << ":" << __LINE__ << " -> " << #x << "=";                                               \
    debug::logger(x);

using std::cin;
using std::cout;

int main() {
    int age;

    cout << "What is your age? ";
    cin >> age;

    if (age >= 18) {
        cout << "Welcome to the restricted section!" << '\n';
    } else if (age <= 0) {
        cout << "Whoa there buddy, you mean to tell me you haven't even been born yet!? Access denied!" << '\n';
    } else {
        cout << "Access denied! This content is age restricted." << '\n';
    }

    return 0;
}
