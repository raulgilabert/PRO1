/*
Read a sequence of chars and print the number of 'a' in it
*/

#include <iostream>

using namespace std;

int main() {
    char letter;
    int counter = 0;
    // check if the letter != '.'
    while (cin >> letter and letter != '.')
	if (letter == 'a') ++counter;

    cout << counter << endl;
}
