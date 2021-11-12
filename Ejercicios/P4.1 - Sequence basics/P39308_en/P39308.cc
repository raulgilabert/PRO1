/*
Get a number and print all the divisors
*/

#include <iostream>

using namespace std;

int main() {
    // num is a natural number
    int num;
    while (cin >> num) {
	cout << "divisors of " << num << ':';

	// Calc of the square root of num
	int root = 1;
	while (root*root < num) ++root;

	// Numbers from 1 to root
	for (int i = 1; i <= root; ++i)
	    if (num%i == 0) cout << ' ' << i;

	// numbers from root to num
	for (int i = root - 1; i >= 1; --i)
	    if (num%i == 0 and num/i != root) cout << ' ' << num/i;

	cout << endl;
    }
}
