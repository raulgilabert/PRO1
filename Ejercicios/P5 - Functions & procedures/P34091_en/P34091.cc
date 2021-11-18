//
// Created by raulg on 11/18/21.
//

/*
Tell if a number is perfect

A number is perfect if the sum of all its divisors except himself is equal
 to the number
 */

#include <iostream>

using namespace std;


// Precondition:
//      n is a natural number
//
// Postcondition:
//      return if the number is perfect
bool is_perfect(int n) {
    int sum = (n != 1);
    // Sum all the divisors except himself
    for (int i = 2; i*i <= n; ++i) {
        if (n%i == 0) {
            sum += n/i + i;
        }
    }

    return (sum == n);
}

int main() {
    int num;

    while(cin >> num)
        cout << endl << endl << is_perfect(num) << endl;
}