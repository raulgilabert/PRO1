/*
Function that returns if a date is valid
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


// Precondition:
// 	d integer
// 	m integer
// 	y integer 1800 <= year <= 9999
//
// Postcondition:
// 	Return if the date is valid
bool is_valid_date(int d, int m, int y) {
    bool valid = true;

    // Invalid cases because day or moth not in valid range of any day or month
    if (d <= 0 or m <= 0 or d > 31 or m > 12)
	valid = false;

    // Case of months of 30 day
    else if ((m == 4 or m == 6 or m == 9 or m == 11) and d > 30)
	valid = false;

    // Case of February
    else if (m == 2 and ((d == 29 and not is_leap_year(y)) or d > 29))
	    valid = false;

    return valid;
}

int main() {
    int d, m, y;
    cin >> d >> m >> y;

    cout << is_valid_date(d, m, y) << endl;
}
