/*
 * Read a number and print the minimum and the maximum digit
*/

#include <iostream>

using namespace std;

/*
 * Precondition:
 * 	n integer >= 0
 *
 * Postcondition:
 * 	max digit in maximum and min digit in minimum
*/
void digit_maxim_i_minim(int n, int& maxim, int& minim) {
    if (n >= 10) {
	digit_maxim_i_minim(n/10, maxim, minim);
	
	int current_digit = n%10;

	if (current_digit > maxim)
	    maxim = current_digit;
        if (current_digit < minim)
	    minim = current_digit;
   }
    else {
	maxim = n;
	minim = n;
    }
}

int main() {
    int num;

    while (cin >> num) {
	int maxim = 0, minim = 9;

	digit_maxim_i_minim(num, maxim, minim);

	cout << num << ' ' << maxim << ' ' << minim << endl;
    }
}
