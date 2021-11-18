//
// Created by raulg on 11/18/21.
//

/*
A function that returns n!
 */

#include <iostream>

using namespace std;

// Precondition:
//      0 <= n <= 12
//
// Postcondition:
// 	    returns n!
int factorial(int n) {
    if (n > 0)
        return n*factorial(n - 1);

    return 1;
}


int main() {
    int num;

    while (cin >> num)
        cout << factorial(num) << endl;
}
