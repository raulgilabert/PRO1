/*
Get an natural number and print it reversed with all the zeroes
*/

#include <iostream>

using namespace std;

int main() {
    // num is a matural number
    int num;
    cin >> num;

    // If the number have more than 1 digit
    while (num > 9) {
        // Print the last digit and delete it
        cout << num%10;
        num /= 10;
    }
    // Print the remaining digit
    cout << num%10 << endl;
}