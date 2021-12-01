/*
 * Print the sum of all the digits of a number. Is the sum has more than one
 * digit return to sum them.
*/

#include <iostream>

using namespace std;


/*
 * Precondition:
 * 	n is a natural number
 *
 * Postcondition:
 * 	return the sum of the digits
*/
int sum_of_digits(int n) {
    if (n == 0)
	return 0;

    return sum_of_digits(n/10) + n%10;
}


/*
 * Precondition:
 * 	n is a natural number
 *
 * Postcondition:
 * 	returns the sum of the digits in one digit
*/
int reduction_of_digits(int n) {
    int sum = sum_of_digits(n);

    if (sum < 10)
	return sum;

    return reduction_of_digits(sum);
}


int main() {
    int num;

    while (cin >> num) {
	cout << reduction_of_digits(num) << endl;
    }
}
