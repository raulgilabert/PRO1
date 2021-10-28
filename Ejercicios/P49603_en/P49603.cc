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
    int numOfWords, counterLines = 0, lastLine = 0;
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
	   
	    // If a word is minor than the last one set found to false
	    if (not first and word < prev) found = false;

	    first = false;
	    prev = word;
	    ++i;
	}

	// If a line is in increasing order set lastLine the value of the 
	// conter and set found to false to continue reading the subsequences
	if (found) {
	    lastLine = counterLines;
	    found = false;
	}
    }

    if (lastLine != 0) cout << "The last line in increasing order is " << 
	lastLine << '.' << endl;
    else cout << "There is no line in increasing order." << endl;
}
