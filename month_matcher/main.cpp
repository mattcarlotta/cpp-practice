#include "debug.hpp"
#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <utility>

#define log(x...)                                                                                                      \
    std::cout << __FUNCTION__ << ":" << __LINE__ << " -> " << #x << "=";                                               \
    debug::logger(x);

using std::cin;
using std::cout;
using std::map;
using std::string;

map<int, string> Months{{1, "January"},   {2, "Feburary"}, {3, "March"},     {4, "April"},
                        {5, "May"},       {6, "June"},     {7, "July"},      {8, "August"},
                        {9, "September"}, {10, "October"}, {11, "November"}, {12, "December"}};

int main() {
    int monthInt;

    cout << "Enter your birthday month as a number: ";
    cin >> monthInt;

    string month = Months[monthInt];

    if (!month.length()) {
        cout << "Not a valid month."
             << " "
             << "Please enter a number between 1-12." << '\n';
    } else {
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
