/*
Input: a natural number n
Output: n squares 2x2 -> (n+2)x(n+2)
*/

#include <iostream>

using namespace std;

int main() {
    // num is a natural number
    int num;
    cin >> num;

    for (int i = 2; i < num + 2; ++i) {
	// First line
	for (int j = 0; j < i; ++j)
	    cout << '*';
	cout << endl;

	for (int j = 1; j < i - 1; ++j) {
	    cout << '*';

	    for (int k = 1; k < i - 1; ++k)
		cout << ' ';
	    
	    cout << '*' << endl;
	}

	for (int j = 0; j < i; ++j)
	    cout << '*';
	cout << endl << endl;
    }
}
