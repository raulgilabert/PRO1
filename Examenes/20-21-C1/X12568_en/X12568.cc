/*
Get a natural number n and draw a triangle with the inner space empty with a 
height n


n = 5
*****
 *  *
  * *
   **
    *

*/

#include <iostream>

using namespace std;

int main() {
    int height;
    cin >> height;

    // First line
    for (int i = 0; i < height; ++i) 
	cout << '*';

    cout << endl;

    // All lines except first and last
    for (int line = 1; line < height - 1; ++line) {
	// Blank space before first *
	for (int i = 0; i < line; ++i)
	    cout << ' ';

	cout << '*';

	// Blank space between first * and second *
	for (int i = 0; i < height - 2 - line; ++i)
	    cout << ' ';

	cout << '*' << endl;
    }

    // Last line
    for (int i = 0; i < height - 1; ++i)
	cout << ' ';

    cout << '*' << endl;
}
