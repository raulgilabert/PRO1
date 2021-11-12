/*
Get a sequence of natural numbers and print the square and the square of each
number
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // num is a natural number
    int num;

    while (cin >> num) {
	// Set precision to six digits after the decimal point
	cout.setf(ios::fixed);
	cout.precision(6);

	// Print the square and the square root
	cout << num*num << ' ' << sqrt(num) << endl;
    }
}

