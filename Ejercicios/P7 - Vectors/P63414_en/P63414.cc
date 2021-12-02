/*
 * Print how many times a number is inputted
 *
 * The number is between 100000000 and 100001000
*/


#include <vector>
#include <iostream>

using namespace std;

/*
 * Read a number that is the quantity of elements of a sequence 100000000 <= n 
 * <= 100001000 and add the frequency of each number of the sequence to a
 * vector that is returned
 *
 * Precondition:
 * 	---
 * 
 * Postcondition:
 * 	A vector of 1001 elements with the frequency each number appears in the 
 * 	sequence
*/
vector<int> read_data() {
    int num;
    cin >> num;

    // Only the appearing numbers will have a number higher than 0
    vector<int> v(1001, 0);

    for (int i = 0; i < num; ++i) {
	int num_inputted;
	cin >> num_inputted;

	++v[num_inputted%10000];
    }

    return v;
}

/*
 * Precondition:
 * 	A vector of 1001 elements
 *
 * Postcondition:
 * 	The same vector
*/
void print_data(const vector<int>& v) {
    int vsize = v.size();

    for (int i = 0; i < vsize; ++i)
	if (v[i] != 0)
	    cout << 1000000000 + i  << " : " << v[i] << endl;
}

int main() {
    print_data(read_data());
}
