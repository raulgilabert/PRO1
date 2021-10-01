/*
Get an natural number and print it reversed with all the zeroes
*/

#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    int multiplier = 1;

    if (num != 0) {
        while (num != num%multiplier) {
            cout << (num/multiplier)%10;
            multiplier *= 10;
        }
    cout << endl;
    }
    else cout << 0 << endl;
}