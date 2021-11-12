/*
Get a sequence of chars and if contains the succession 'h', 'e', 'l', 'l', 'o'
print "hello". If not, print "bye"
*/

#include <iostream>

using namespace std;

int main() {
    bool found = false;

    char letter;
    cin >> letter;

    while (not found and letter != '.') {
	// Check if sequence is 'h', 'e', 'l', 'l' 'o'
	if (letter == 'h') {
	    cin >> letter;

	    if (letter == 'e') {
		cin >> letter;
		
		if (letter == 'l') {
		    cin >> letter;

		    if (letter == 'l') {
			cin >> letter;

			if (letter == 'o') {
			    found = true;
			}
		    }
		}
	    }
	}
	else
	   cin >> letter;
    }


    if (found) cout << "hello" << endl;
    else cout << "bye" << endl;
}
