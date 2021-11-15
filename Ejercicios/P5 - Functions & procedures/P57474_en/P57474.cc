/*
Iterative function that returns the factorial of a number
*/

#include <iostream>

using namespace std;

// Precondition:
// 	n >= 0
//
// Postcondition:
// 	returns n!
int factorial(int n) {
    int f = 1;
    int i = 0;

    while (i < n) {
	++i;
	f = f*i;
    }

    return f;
}

int main() {
    int n;
    cin >> n;

    cout << factorial(n) << endl;
}
