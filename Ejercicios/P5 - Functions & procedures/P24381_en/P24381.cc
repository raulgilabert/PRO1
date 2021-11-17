//
// Created by raulg on 11/17/21.
//

#include <iostream>

using namespace std;

/*
Get a number n and a character and print a cross n*n with the character given
*/


// Precondition:
//      n >= 3 and odd
//      letter is a char
//
// Postcondition:
//      The lines before or after the middle one in the cross
void linesNotMiddle(int n, char c) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << ' ';

        cout << c << endl;
    }
}


// Precondition:
//      n >= 3 and odd
//      letter is a char
//
// Postcondition:
//      A cross printed
void cross(int n, char c) {
    linesNotMiddle((n-1)/2, c);

    for (int i = 0; i < n; ++i)
        cout << c;

    cout << endl;

    linesNotMiddle((n-1)/2, c);
}


int main() {
    int n;
    char c;

    cin >> n >> c;

    cross(n, c);
}