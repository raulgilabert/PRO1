/*
Read a rational number in the format num/dem
*/

#include <iostream>

using namespace std;

// Precondition: 
// 	a positive integer 1 <= a <= 10^9
// 	b positive integer 1 <= b <= 10^9

// Postcondition:
// 	maximum common divisor of a and b
int mcd(int a, int b) {
    // Calc the mcd
    while (b > 0) {
	int temp;

	temp = b;
	b = a%b;
	a = temp;
    }

    return a;
}

// Precondition:
// 	num integer
// 	dem integer
//
// Postcondition:
//	num and dem with the common factors removed
void read_rational(int& num, int& dem) {
    char x;
    cin >> num >> x >> dem;

    // Remove common factors in num and dem
    int mcdAB = mcd(num, dem);

    num /= mcdAB;
    dem /= mcdAB;
}

int main() {
    int num, dem;
    read_rational(num, dem);
    cout << num << ' ' << dem << endl;
}
