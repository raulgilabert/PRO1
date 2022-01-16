#include <iostream>
#include <string>

using namespace std;





// Pre: p, pref are strings of lowercase letters
// Post: returns true if pref is a prefix of p, false otherwise
bool prefix (const string & p, const string & pref) {
    int pSize = pref.length();

    int i = 0;
    bool correct = true;
    while (correct and i < pSize) {
	if (p[i] != pref[i])
	    correct = false;
	++i;
    }

    return correct;
}


int main() {
    int counter = 1;

    int n;
    
    while (cin >> n) {
	string first_word;
	cin >> first_word;

	int counter_prefixes = 1;

	for (int i = 1; i < n; ++i) {
	    string word;
	    cin >> word;

	    if (prefix(first_word, word))
		++counter_prefixes;
	}

	cout << "Linea " << counter << ": " << counter_prefixes << " - " << 
	    first_word << endl;

	++counter;
    }
}


