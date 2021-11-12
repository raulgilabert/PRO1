/*
Get a natural number n and print all numbers between 0 and it
*/

#include <iostream>

using namespace std;

int main() {
    // get n
    int n;
    cin >> n;

    int i = 0;

    // while i <= n then print i and add 1 to it
    while (i <= n) {
        cout << i << endl;

        ++i;
    }
}