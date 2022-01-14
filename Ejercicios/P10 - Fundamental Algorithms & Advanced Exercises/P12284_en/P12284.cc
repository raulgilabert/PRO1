// Get n and k positive integers where 1 <= k <= n and n words.
// Por every sequence of data print the k most frequent words in order and at
// the end a line of 10 dashes (----------)


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct word {
    string name;
    int quantity;
};


bool cmp(const word& a, const word& b) {
    if (a.quantity == b.quantity)
	return a.name < b.name;

    else
	return a.quantity > b.quantity;
}


int main() {
    int n, k;

    while (cin >> n >> k) {
	vector<string> words(n);
   
	for (int i = 0; i < n; ++i) {
	    cin >> words[i];
	}

	sort(words.begin(), words.end());

	string last = "";

	vector<word>

	cout << "----------" << endl;
    }
}

