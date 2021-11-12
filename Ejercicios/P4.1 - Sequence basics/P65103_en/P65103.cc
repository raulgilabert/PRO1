/*
Get a number i and a sequence and print the number in the i position or 
""Incorrect position." if i is higher than the number of elements in the 
sequence
*/

#include <iostream>

using namespace std;

int main() {
    // i is a natural number
    int i;
    cin >> i;

    int num, counter = 1;
    bool found = false;
    
    // Check the numbers until the counter == i or EOF
    while (not found and cin >> num) {
	if (i == counter) found = true;
	++counter;
    }

    if (found) cout << "At the position " << i << " there is a(n) " << num <<
	'.' << endl;
    else cout << "Incorrect position." << endl;
}
