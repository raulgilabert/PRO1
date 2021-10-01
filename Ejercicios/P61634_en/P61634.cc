/*
Get a natural number between 1800 and 9999

If it is divisible by four and, if it ends by 00, the first two digits are also
divisible by four, print "YES". If not, print "NO".
*/

#include <iostream>

using namespace std;

int main() {
    int year;

    cin >> year;

    if (year%4 == 0) {
        if (year%100 == 0 and (year/100)%4 != 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    else {
        cout << "NO" << endl;
    }
}