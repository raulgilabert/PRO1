/*
Read a natural number n and read n sequences. Print the number of pairs of 
consecutive numbers where the second numbers is higher than the first
*/

#include <iostream>

using namespace std;

int main() {
    // n is a natural number
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
	int prev = 0;
	bool first = true;

	int num, counter = 0;
	// Read the senquence and check if the number is higher than the 
	// previous
	while (cin >> num and num != 0) {
	    if (not first and num > prev) ++counter;
	    
	    first = false;
	    prev = num;
	    }
	cout << counter << endl;
	
    }
}
