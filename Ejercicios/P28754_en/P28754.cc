/*
Get a natural number and print it in binary and reversed
*/

#include <iostream>

using namespace std;

int main() {
    int numberToBin;
    cin >> numberToBin;

    // if the number is 0, print 0
    if (numberToBin == 0) cout << 0;

    // if the number is different than 0, make de decimal to binary conversion
    // method of the division by 2 without reversing at the end
    while (numberToBin != 0) {
        cout << numberToBin%2;
        numberToBin /= 2;
    }

    cout << endl;
}