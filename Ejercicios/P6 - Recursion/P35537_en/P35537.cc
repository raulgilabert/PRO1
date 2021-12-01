/*
 * Say if a number is increasing or not. A number is increasing if it every 
 * digit is less or equal than the digit on its right
*/

#include <iostream>

using namespace std;

bool is_increasing(int n) {
    if (n == 0) return true;
    else if (n != 0 and n%10 >= (n/10)%10) return is_increasing(n/10);
    return false;
}

int main() {
    int n;

    while (cin >> n) {
	cout << is_increasing(n) << endl;
    }
}
