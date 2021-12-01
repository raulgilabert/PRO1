/*
 * Get a number and print it fatten
*/

#include <iostream>

using namespace std;


/*
 * Precondition:
 * 	n is a natural number
 *
 * Postcondition:
 * 	The number fatten
*/
int fat(int n) {
    if (n/10 != 0) {
	int next = fat(n/10);

	if (n%10 < next) {
	    cout << next;
	    return next;
	}
	else {
	    cout << n%10;
	    return n%10;
	}
    }
    
    cout << n;
    return n;
}


int fatten(int n) {
    return fat(n);
}



int main() {
    int n;
    
    while (cin >> n) {
	cout << fatten(n);
	
	cout << endl;
    }
    
}
