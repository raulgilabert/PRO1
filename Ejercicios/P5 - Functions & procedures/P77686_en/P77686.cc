/*
Return if the number is palindromic
*/

#include <iostream>

using namespace std;

int reverse_number(int n) { 
    int numberReversed = 0;
    
    while (n > 0) {
	// Invert the number 
	numberReversed *= 10;
	numberReversed += n%10;

	n /= 10;
    }

    return numberReversed;
}


bool is_palindromic(int n) {
    return (reverse_number(n) == n);
}

int main() {
    int num;

    cin >> num;

    cout << is_palindromic(num) << endl;
}
