/*
Get two natural numbers n, m where n >= m print Hn - Hm
*/

#include <iostream>

using namespace std;

int main() {
    // n and m are natural numbers
    int n, m;

    while (cin >> n >> m) {
        double sum = 0;

        // Calc of the harmonic numbers Hn - Hm without counting the common 
        // numbers
        for (int i = m + 1; i <= n; ++i) sum += 1/double(i);

        cout.setf(ios::fixed);
        cout.precision(10);

        cout << sum << endl;
    }
}