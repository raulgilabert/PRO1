/*
With a number n, print a V of height n
*/

#include <iostream>

using namespace std;

int main() {
    // Get height of the V
    int height;
    cin >> height;

    for (int line = 0; line < height; ++line) {
	// Blank space before the V
	for (int j = 0; j < line; ++j)
	    cout << ' ';

	// First V of the V
	cout << 'V';
	
	// If it is not the last line print the spaces between the first V and
	// the second V and the second V
	if (line + 1 < height) {
	    for (int j = 0; j < 2*height - 3 - line*2; ++j)
		cout << ' ';

	    cout << 'V';
	}

	cout << endl;
    }
}
