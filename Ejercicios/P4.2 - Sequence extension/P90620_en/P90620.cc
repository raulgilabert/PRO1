/*
Get a sequenec of integers ended by 0 and print if it contains any peak greater
than 3143, being a peak a number higher than his predecessor and successor
*/

#include <iostream>

using namespace std;

int main() {
    int prev, prevPrev;
    cin >> prevPrev >> prev;

    bool found = false;
    int num;
    while (cin >> num and num != 0 and not found) {
	// if it is a peak and it is higher than 3143
	if (prev > prevPrev and prev > num and prev > 3143) found = true;

	// move the numbers one position rear
	prevPrev = prev;
	prev = num;
    }

    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;
}
