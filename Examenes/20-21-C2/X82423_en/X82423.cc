// Input: A sequence started by a number n and n sequences of positive integer 
// numbers ended by -1
//
// Output: The first position of the longest chain of equal numbers and the
// length of it. In case of several chains of equal length the first one's data
// will be printed

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++n) {
	int firstNumPos, numFound, currentNum, lastNum = -1, counter = 0;
	bool chain = false;

	cin >> currentNum;

	while (currentNum != -1) {
	    if (currentNum == lastNum) {
		if (not chain) {
		    firstNumPos = counter;
		}

		chain = true;
	    }

	    ++counter;
	    lastNum = currentNum;
	    cin >> currentNum;
	}

	cout << 
    }
}
