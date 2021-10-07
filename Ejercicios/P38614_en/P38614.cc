/*
Get a n natural number

Print " IS COOL" if the sum of the digits in odd positions is an even number.
Print " IS NOT COOL" if not
*/

#include <iostream>

using namespace std;

int main() {
    // n is a natural number
    int n;
    cin >> n;

    cout << n;

    int sum = 0;
    // add to sum the numbers in odd position
    while (n > 0) {
        sum += n%10;
        n /= 100;
    }

    if (sum%2 == 0) cout << " IS COOL" << endl;
    else cout << " IS NOT COOL" << endl;
}