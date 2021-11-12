/*
Get a sequence of angles in degrees and print their sine and cosine
*/


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double angle;

    while (cin >> angle) {
	// Set precision
	cout.setf(ios::fixed);
	cout.precision(6);

	// Convert angle to radians
	angle *= M_PI/180;

	cout << sin(angle) << ' ' << cos(angle) << endl;
    }
}
