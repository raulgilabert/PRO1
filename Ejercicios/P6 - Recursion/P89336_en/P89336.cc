/*
 * Read a sequence of words and print the first half
*/

#include <iostream>

using namespace std;

/*
 * Precondition:
 * 	n is a natural number and the index of input of the word
 *
 * Postcondition:
 * 	returns the number of elements
*/

int print(int n) {
    string word;
    
    if (cin >> word) {
	int num_elems = print(n + 1);
	if (n <= num_elems/2)
	    cout << word << endl;
	    
	return num_elems;
    }

    return n - 1;
}

int main() {
    print(1);
}
