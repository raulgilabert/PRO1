#include <iostream>

using namespace std;

// Pre: x > 0
// Post: returns the value of x without 0 digits
//
// Example: 3097601 -> 39761
int remove_zeros(int x) {
    // Base case
    if (x < 10)
	return x;

    // If the digit is 0
    if (x%10 == 0)
	return remove_zeros(x/10);
    
    // If the digit is not 0
    else
	return 10*remove_zeros(x/10) + x%10;
}

int main() {
    int num;

    while (cin >> num)
	cout << remove_zeros(num) << endl;
}
