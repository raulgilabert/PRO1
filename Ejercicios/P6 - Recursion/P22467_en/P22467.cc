/*
 * A number is perfect prime if it is prime an the sum of its digits is perfect
 * prime
*/ 

#include <iostream>

using namespace std;

/*
 * Precondition:
 * 	n is an integer
 * 	divisor is an integer >= 2
 *
 * Postcondition:
 * 	Return if n is prime
*/
bool is_prime(int n, int divisor) {
                                     // Case for 2
    if (n < 2 or (n%divisor == 0 and n != divisor))
        return false;

   if (divisor*divisor > n)
	return true;

   return is_prime(n, ++divisor);
}


/*
 * Precondition:
 * 	n is an integer
 *
 * Postcondition:
 * 	The sum of the digits
*/
int sum_of_digits(int n) {
    if (n/10 == 0) 
	return n;
    else
	return n%10 + sum_of_digits(n/10);
}


/*
 * Precondition:
 * 	n is an integer
 * 
 * Postcondition:
 * 	Return if n is a prime perfect
*/
bool is_perfect_prime(int n) {
    if (n/10 == 0)
	return is_prime(n, 2);
    else {
	return (is_prime(n, 2) and is_perfect_prime(sum_of_digits(n)));
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << is_perfect_prime(n) << endl;
	cout << is_prime(n, 2) << endl;
    }
}

