#include "debug.hpp"
#include <array>
#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

#define log(x...)                                                                                                      \
    std::cout << __FUNCTION__ << ":" << __LINE__ << " -> " << #x << "=";                                               \
    debug::logger(x);

using std::cin;
using std::cout;
using std::string;
using std::vector;

int main() {
    vector<string> Months{"January", "Feburary", "March",     "April",   "May",      "June",
                          "July",    "August",   "September", "October", "November", "December"};
    int monthInt;

    cout << "Enter your birthday month as a number: ";
    cin >> monthInt;

    if (monthInt < 1 || monthInt > 12) {
        cout << "Not a valid month."
             << " "
             << "Please enter a number between 1-12." << '\n';
    } else {
        string month = Months[monthInt - 1];
        cout << "Your birthday is in " << month << "." << '\n';
    }

    return 0;
}

// switch (monthInt) {
// case 1:
//     month = "January";
//     break;
// case 2:
//     month = "Febuary";
//     break;
// case 3:
//     month = "March";
//     break;
// case 4:
//     month = "April";
//     break;
// case 5:
//     month = "May";
//     break;
// case 6:
//     month = "June";
//     break;
// case 7:
//     month = "July";
//     break;
// case 8:
//     month = "August";
//     break;
// case 9:
//     month = "September";
//     break;
// case 10:
//     month = "October";
//     break;
// case 11:
//     month = "November";
//     break;
// case 12:
//     month = "December";
//     break;
// default:
//     break;
// }
