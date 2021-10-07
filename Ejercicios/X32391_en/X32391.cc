/*
Get three integers d >= 0, n >= 0, t > 0. Then get  inteners a1, a2, ..., an
*/

#include <iostream>

using namespace std;

int main() {
    int d, n, t;

    cin >> d >> n >> t;

    int weeks = 0;
    for (int i = 0; i < t; ++i) {
        int a;
        cin >> a;

        // Substract the weekly expenses and add the allowances
        n -= d;
        n += a;

        // If balance is positive increment the number of weeks
        if (n > 0) ++weeks;
    }

    cout << weeks << endl;    
}