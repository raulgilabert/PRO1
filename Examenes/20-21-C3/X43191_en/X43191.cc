#include <iostream>

using namespace std;


// Pre: n >= 0, base > 1
// Post: returns true when n is a power of base.
// returns false otherwise
bool is_power(int n, int base) {
    if (n == 1)
	return true;
    else if (n%base != 0)
	return false;
    else
	return is_power(n/base, base);
}


int min(int a, int b) {
    int minimum = a;

    if (b < a)
	minimum = b;

    return minimum;
}


bool check_power_pair(int n1, int n2) {
    int i = 1;

    int minimum = min(n1, n2);

    bool power_pair = (minimum == 1);
    // Get the first half of the divisors

    while (not power_pair and i*i <= minimum) {
	if (minimum%i == 0)
	    if (is_power(n1, i) and is_power(n2, i))
		power_pair = true;
	 ++i;
    }

    return power_pair;
}


int main() {
    int prev, n;
    while (cin >> prev >> n) {
	int counter = 0;

	while (n != 0) {
	    if (check_power_pair(n, prev))
		++counter;

	    prev = n;
	    cin >> n;
	}

	cout << counter << endl;
    }
}
