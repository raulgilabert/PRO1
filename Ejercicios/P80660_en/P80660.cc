/*
Get natural numbers if is even divide by 2. If odd multiply by 3 and add 1
*/

#include <iostream>

using namespace std;

int main() {
    // n is a natural number >= 1
    int n;

    while (cin >> n) {
        int counter = 0;

        while (n != 1) {
            if (n%2 == 0) {
                n /= 2;
            }
            else {
                n *= 3;
                n += 1;
            }

            ++counter;
        }

        cout << counter << endl;
    }
}