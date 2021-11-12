/*
Get an integer n and then n sequences and print for each sequence the minimum, 
the maximum and the average with four decimal digits
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
	// quantity of sequences
	int quantity;
	cin >> quantity;

	double max, min, average, num;
	cin >> num;

	max = min = average = num;

	// read the sequences
	int counter = 1;
	for (int j = 1; j < quantity; ++j) {
	    cin >> num;

	    // update max, min and average
	    if (num > max) max = num;
	    if (num < min) min = num;

	    ++counter;
	    average += num;
	}

	cout.setf(ios::fixed);
	cout.precision(4);

	cout << min << ' ' << max << ' ' << average/counter << endl;
    }
}
