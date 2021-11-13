/*
Function that returns if a year is leap or not.
*/

#include <iostream>

using namespace std;

// Precondition:
// 	year integer 1800 <= year <= 9999
//
// Postcondition:
// 	Return if the year is leap
bool is_leap_year(int year) {
    // The year is leap if it is a multiple of 4 and not a multiple of 100
    // except when it is a multiple of 400
    return (year%4 == 0 and not (year%100 == 0 and (year/100)%4 != 0));
}

int main() {
    int year;
    cin >> year;

    cout << is_leap_year(year) << endl;
}
