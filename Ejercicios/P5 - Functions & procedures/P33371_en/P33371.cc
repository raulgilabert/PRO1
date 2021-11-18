//
// Created by raulg on 11/17/21.
//

/*
Encrypt a message with the Caesar cipher. Given a constant k, replace the
 letters with the letter k positions to its right.
*/

#include <iostream>

using namespace std;

// Precondition:
//      c is a lowercase letter or a separatos != ' '
//      k is an integer > 0
//
// Postcondition:
//      Returns the character encrypted
char encoded(char c, int k) {
    char charReturn;

    if ('a' <= c and c <= 'z')
        // Convert to the letter encrypted and made uppercase
        charReturn = 'A' + (c - 'a' + k)%('z' - 'a' + 1);

    else if (c == '_')
        charReturn = ' ';

    else
        charReturn = c;

    return char(charReturn);
}

int main() {
    char letter;

    int num;
    while (cin >> num) {
        cin >> letter;
        while (letter != '.') {
            cout << encoded(letter, num);

            cin >> letter;
        }

        cout << endl;
    }
}