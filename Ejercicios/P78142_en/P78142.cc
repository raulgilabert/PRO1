/*
Read a sequence of positive real numbers and print the average with two decimal
digits
*/

#include <iostream>

using namespace std;

int main() {
    // Number and sum are positive real numbers
    double number, sum;
    int divisor;
    sum = divisor = 0;

    // While input is submitted, execute the while loop
    while (cin >> number) {
        // Add the number to sum and increase the divisor
        sum += number;
        ++divisor;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << sum/divisor << endl;
}