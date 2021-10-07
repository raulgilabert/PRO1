/*
Read a sequence of chars ended with a period and print the number of times the
letter 'a' is in the sequence
*/

#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;

    // View on all the chars of the input and increase counter var if c == 'a'
    int counter = 0;
    while (c != '.') {
        if (c == 'a') ++counter;

        cin >> c;
    }

    cout << counter << endl;
}