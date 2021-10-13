/*
Read a basis and then read numbers and print the sum of the digits in basis 10
*/

#include <iostream>

using namespace std;

int main() {
    // basis and num are natural numbers
    int basis, num;
    cin >> basis;

    while (cin >> num) {
        int sum = 0;

        cout << num << ": ";

        // Calc the sum of the digits
        while (num > 0) {
            sum += num%basis;

            num /= basis;
        }

        cout << sum << endl;
    }
    
}