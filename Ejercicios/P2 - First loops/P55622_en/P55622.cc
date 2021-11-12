/*
Get a n natural number and print the number of digits of n
*/

#include <iostream>

using namespace std;

int main() {
    // n is a natural number
    int n;
    cin >> n;

    cout << "The number of digits of " << n << " is ";
    int digits = 1;

    // Count number of digits
    while (n > 9) {
        ++digits;
        n /= 10;
    }

    cout << digits << '.' << endl;
}