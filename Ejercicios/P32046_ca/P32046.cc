/*
Read a sequence of naturals and print the number of numbers that ends with the 
last 3 digits of the first
*/

#include <iostream>

using namespace std;

int main() {
    // all the int are natural numbers
    int calcNum;
    cin >> calcNum;

    cout << "nombres que acaben igual que " << calcNum << ':' << endl;
    // get the three last elements
    calcNum %= 1000;

    int n, counter = 0;
    while (cin >> n) {
        // if the last three digits of n increase the counter
        int nThreeDigits = n%1000;

        if (nThreeDigits == calcNum) {
            ++counter;
            cout << n << endl;
        }
    }
    cout << "total: " << counter << endl;
}