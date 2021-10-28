/*
Get a sequence of sequences started by a natural n number and a sequence of n
words. Print the index of the first subsequence with the elements in increasing
order. If not, print that.
*/

#include <iostream>

using namespace std;

int main() {
    bool found = false;
    
    // Loop of subsequences
    int numOfWords, counterLines = 0;
    while (not found and cin >> numOfWords) {
	// Increase counter of lines
	++counterLines;

	bool first = true;
	found = true;
	// Read all elements of subsequence
	int i = 0;
	string prev;
	while (i < numOfWords) {
	    string word;
	    cin >> word;
	   
	    if (not first) {
		// If a word is minor than the last one set the var to false
		if (word < prev) found = false;
	    }

	    first = false;
	    prev = word;
	    ++i;
	}
    }

    if (found) cout << "The first line in increasing order is " << counterLines 
	<<'.' << endl;
    else cout << "There is no line in increasing order." << endl;
}
