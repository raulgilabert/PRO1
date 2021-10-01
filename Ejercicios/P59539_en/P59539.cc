/*
Get a natural number n and print the n-th harmonic number with 4 digits after
the decimal point

Hn = 1/1 + 1/2 + ... + 1/n
*/

#include <iostream>
// Needing to fix the digits after the decimal point
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Harmonic number calc
    double harmonic = 0;
    for (int i = 1; i <= n; ++i) {
        harmonic += 1/double(i);
    }

    // Fix the digits after the decimal point to 4
    //      ------------------------
    cout << fixed << setprecision(4) << harmonic << endl;
}