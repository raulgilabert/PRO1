//
// Created by raulg on 11/25/21.
//

/*
 * Read a sequence of prime numbers ended by a non-prime number and print the 
 * next prime number of each one
*/

#include <iostream>

using namespace std;

/*
 * Precondition:
 * 	An integer number
 *
 * Postcondition:
 * 	A bool positive is the number is prime or negative if it is not
*/
bool check_prime(int num) {
    int i = 2;
    bool prime = true;

    while (prime and i*i <= num) {
	if (num%i == 0)
	    prime = false;

	++i;
    }

    return prime;
}


/*
 * Precondition:
 * 	A prime number
 *
 * Postcondition:
 * 	The next prime number of the inputted one
*/
int next_prime(int num) {
    int next_num = ++num;
    while (not check_prime(next_num))
	++next_num;

    return next_num;
}


int main() {
    int num;
    cin >> num;

    while (check_prime(num)) {
	cout << next_prime(num) << endl;
	
	cin >> num;
    }
}
