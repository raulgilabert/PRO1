/*
Read a sequence of numbers and print the first even number
*/

#include <iostream>

using namespace std;

int main() {
    int counter = 1, n;
    // Do the while until the first even number
    while (cin >> n and n%2 == 1) ++counter;

    cout << counter << endl;
}
