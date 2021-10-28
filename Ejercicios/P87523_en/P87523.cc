/*
Get a sequence of chars and if contains the succession 'h', 'e', 'l', 'l', 'o'
print "hello". If not, print "bye"
*/

#include <iostream>

using namespace std;

int main() {
    char first, second, third, fourth, letter;
    int counter = 0;
    bool found = false;

    cin >> first >> second >> third >> fourth;

    while (cin >> letter and letter != '.' and not found) {
	// Check if sequence is 'h', 'e', 'l', 'l' 'o'
	if (first == 'h' and second == 'e' and third == 'l' and
		fourth == 'l' and letter == 'o') found = true;

	first = second;
	second = third;
	third = fourth;
	fourth = letter;

	++counter;
    }


    if (found) cout << "hello" << endl;
    else cout << "bye" << endl;
}
