/*
Get a basis and a number in basis 10 and print the digits of the namber in the 
basis
*/

#include <iostream>

using namespace std;

int main() {
    // basis and number are natural numbers
    int basis, number;

    while (cin >> basis >> number) {
        // calc the digits in the basis
        int counter = 0;
        while (number > 0) {
            number /= basis;
            ++counter;
        }

        cout << counter << endl;
    }
}