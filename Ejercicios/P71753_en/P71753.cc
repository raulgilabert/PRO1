/*
Read a sequence of sequences starting with the number of elements of the 
subsequence and print the higher element
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    
    while (cin >> n) {
	int max;
	cin >> max;
	
	// Read al the nums of the subsequence
	for (int i = 1; i < n; ++i) {
	    int num;
	    cin >> num;
	    
	    max += (num - max)*(num > max);
	}
    cout << max << endl;
    }
}
