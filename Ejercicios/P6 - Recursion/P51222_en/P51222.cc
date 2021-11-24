//
// Created by raulg on 11/18/21.
//

#include <iostream>

using namespace std;


// Precondition:
//      n is a natural number
//
// Postcondition:
//      Returns the number of digits of n
int number_of_digits(int n) {
    if (n/10 != 0) return 1 + number_of_digits(n/10);
    return 1;
}

int main() {
    int num;
    while (cin >> num)
        cout << number_of_digits(num) << endl;
}