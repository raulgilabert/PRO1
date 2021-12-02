/*
 * Tell the number of common elements in two vectors
*/


#include <vector>
#include <iostream>

using namespace std;

/*
 * Precondition:
 * 	X is a vector of integers in increasing order
 * 	Y is a vector of integers in increasing order
 *
 * Postcondition:
 * 	Returns the number of common elements
*/
int common_elements(const vector<int>& X, const vector<int>& Y) {
    int i = 0, j = 0, maxX = X.size(), maxY = Y.size(), counter = 0;

    // Compare the elements
    while (i < maxX and j < maxY) {
	if (X[i] == Y[j]) {
	    ++counter;
	    ++j;
	}

	else if (X[i] > Y[j])
	    ++j;
	
	else
	    ++i;
    }

    return counter;
}


/*
 * Precondition:
 * 	---
 *
 * Postcondition:
 * 	A vector of integers with the data inputted by the user
*/
vector<int> read_data() {
    int vsize;
    cin >> vsize;

    vector<int> v(vsize);

    for (int i = 0; i < vsize; ++i)
	cin >> v[i];

    return v;
}


int main() {
    vector<int> X = read_data();

    cout << 'X' << endl;

    vector<int> Y = read_data();

    cout << 'Y' << endl;

    cout << common_elements(X, Y) << endl;
}
