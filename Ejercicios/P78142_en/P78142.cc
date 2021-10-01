/*
Read a sequence of positive real numbers and print the average with two decimal
digits
*/

#include <iostream>
// Required to fix the decimal digits number
#include <iomanip>

using namespace std;

int main() {
    // Number and sum must be double because the input can have decimals
    double number, sum;
    int i;
    sum = i = 0;

    // While input is submitted, execute the while loop
    while (cin >> number) {
        sum += number;
        ++i;
    }

    cout << fixed << setprecision(2) << double(sum)/i << endl;
}