/*
Read a sequence of positive real numbers and print the average with two decimal
digits
*/

#include <iostream>

using namespace std;

int main() {
    // Number and sum are positive real numbers
    double number, sum;
    int i;
    sum = i = 0;

    // While input is submitted, execute the while loop
    while (cin >> number) {
        sum += number;
        ++i;
    }

    cout.setf(ios::fixed);
    cout.precision(4);
    cout << double(sum)/i << endl;
}