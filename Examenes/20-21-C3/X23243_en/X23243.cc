#include <iostream>

using namespace std;


int sum_of_digits(int n) {
    if (n < 10)
	return n;

    return n%10 + sum_of_digits(n/10);
}


int main() {
    int prev;

    cin >> prev;

    int n, counter = 0;
    while (cin >> n) {
	if (prev%sum_of_digits(n) == 0)
	    ++counter;
    
	prev = n;
    }

    cout << counter << endl;
}
