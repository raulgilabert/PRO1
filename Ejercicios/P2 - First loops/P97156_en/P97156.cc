/*
Get two natural number a and b and print all the number between a and b
*/

#include <iostream>

using namespace std;

int main() {
    // a and b are natural numbers
    int a, b;

    cin >> a >> b;

    // Print number from a to b-1 with comma
    for (int i = a; i <= b; ++i) {

        // Print from a to b-1 with comma
        if (i != b) cout << i << ',';

        // Print b without comma
        else cout << b;
    }
    cout << endl;
}