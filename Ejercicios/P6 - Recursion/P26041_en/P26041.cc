/*
 * Read sequence of words and print it in reverse order
*/

#include <iostream>

using namespace std;

/*
 * Precondition:
 * 	Nothing
 * 
 * Postcondition:
 * 	The word inputted in reverse order
*/
void print_reversed() {
    string word;

    if(cin >> word) {
	print_reversed();
        cout << word << endl;
    }
}

int main() {
    print_reversed();
}
