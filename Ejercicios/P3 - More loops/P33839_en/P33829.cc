/*
Read numbers and print the sum of the digits
*/

#include <iostream>

using namespace std;

int main() {
    // num is a natural number
    int num;

    while (cin >> num) {
        int sum = 0;

        cout << "The sum of the digits of " << num << " is ";

        // Calc the sum of the digits
        while (num > 0) {
            sum += num%10;

            num /= 10;
        }

        cout << sum << '.' << endl;
    }
    
}