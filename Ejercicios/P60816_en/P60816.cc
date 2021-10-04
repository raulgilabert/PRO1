/*
Read a number and print in hexadecimal reversed
*/

#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    // If number is different to 0 execute the while
    if (num != 0) {
        while (num != 0) {
            // Numbers from 0 to 9
            if (num%16 < 10) cout << num%16;

            // Numbers from 10 to 15
            else cout << char('A' + num%16-10);

            num /= 16;
        }
    }
    // If not, print 0
    else cout << '0';

    cout << endl;
}