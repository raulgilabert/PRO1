/*
 * Convert a sequence of decimal numbers to binary, octal and hexadecimal
 * notation
*/

#include <iostream>

using namespace std;


/*
 * Precondition:
 * 	num and notation are natural numbers
 *
 * Postcondition:
 * 	prints the numbers received in the notation
*/
void print(int num, int notation) { 
    int temp = num/notation;

    if (temp != 0)
	print(temp, notation);

    if (num%notation < 10)
	cout << num%notation;
    else
	cout << char('A' + num%notation - 10);
}

int main() {
    int num;

    while (cin >> num) {
	cout << num << " = ";
	print(num, 2);
	cout << ", ";
	print(num, 8);
	cout << ", ";
	print(num, 16);
	cout << endl;
    }
}
