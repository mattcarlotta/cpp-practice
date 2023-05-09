#include "debug.hpp"
#include <cmath>
#include <iostream>
#include <string>

#define log(x...)                                                              \
  std::cout << __FUNCTION__ << ":" << __LINE__ << " -> " << #x << "=";         \
  debug::logger(x);

// using std::cin;
// using std::cout;

int main() { return 0; }
