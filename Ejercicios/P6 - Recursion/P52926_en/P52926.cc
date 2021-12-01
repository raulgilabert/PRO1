/*
 * Read a sequence of words until the word "end" and print it reversed
*/

#include <iostream>

using namespace std;

/*
 * Precondition:
 * 	Nothing
 *
 * Postcondition:
 * 	the word printed
*/
void print_lines() {
    string word;
    cin >> word;

    if (word != "end") {
	print_lines();
        cout << word << endl;
    }
}

int main() {
    print_lines();
}
