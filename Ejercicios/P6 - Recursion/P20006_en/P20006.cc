//
// Created by raulg on 11/24/21.
//

/*
 * Read a prefixed expression and print the result of evaluating it. The
 * possible operators are sum, subtraction and multiplication
*/

#include <iostream>

using namespace std;


/* Precondition:
 *      A char '+', '*', '-' or a number from 0 to 9
 *
 * Postcondition:
 *      The calc of all the inputs
*/
int operate() {
    // Read the input being it a char '+', '*', '-' or a number from 0 to 9
    char input;
    cin >> input;

    if (input == '+') {
        return operate() + operate();
    }
    else if (input == '*') {
        return operate() * operate();
    }
    else if (input == '-') {
        return operate() - operate();
    }
    else {
        return int(input - '0');
    }
}

int main() {
    cout << operate() << endl;
}