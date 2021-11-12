#include <iostream>

using namespace std;

int main() {
    // n is the number of numbers
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
	// num is a natural number
	int num;
        cin >> num;

	bool prime = (num != 1 and num != 0);
	int j = 2;

	// calc if num is prime
	while (prime and j*j <= num) {
	    prime = num%j != 0;
	    ++j;
        }
    
        if (prime)
	   cout << num << " is prime" << endl;
	else
	    cout << num << " is not prime" << endl;
    }
}
