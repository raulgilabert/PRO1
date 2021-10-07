/*
Read an integer positive x and a sequence of intengers. Print the number of 
elements in the sequence that is multiple of x.
*/

#include <iostream>

using namespace std;

int main() {
    // x is a positive integer
    int x;
    cin >> x;

    int input;
    int multiples = 0;

    // while there is input, if the input is multiple of x, add 1 to multiples
    while (cin >> input) {
        if (input%x == 0) ++multiples;
    }

    cout << multiples << endl;
}