/*
Read a natural number n and then a sequence of 2n integers. If the middle digit
of one number is different than the middle digit of the previous one, the 
player looses
*/

#include <iostream>

using namespace std;

int getMiddleDigit(int num) {
    int iMiddleDigit = 1;
    int numProcess = num;
    while (numProcess / 10 != 0) {
	++iMiddleDigit;
	numProcess /= 10;
    }

    iMiddleDigit = iMiddleDigit/2;

    cout << iMiddleDigit << endl;

    int multiplier = 1;

    for (int i = 0; i < iMiddleDigit; ++i) multiplier *= 10;

    cout << multiplier << endl;
    cout << num/multiplier << endl;

    return (num/multiplier)%10;
}

int main() {
    int n;
    cin >> n;

    int prev, num;
    bool first = true, found = false;

    int i = 0;
    while (not found  and i < n) {
	cin >> num;
	if (not first) {
	    if (getMiddleDigit(num) != getMiddleDigit(prev)) {
		if (i%2 == 1) 
		    cout << 'B' << endl;

		else
		    cout << 'A' << endl;
	    
		found = true;
	    }
	}

	prev = num;
	first = false;
    }
}
