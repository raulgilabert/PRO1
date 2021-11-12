/*
Convert Celsius to Farenheit and Farenheit to Celsius
Get naturaal number and a sequence of n items with the unit to convert and the 
number
*/

#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; ++i) {
	char unit;
	double magnitude;

	cin >> unit >> magnitude;

	cout.setf(ios::fixed);
	cout.precision(1);

	if (unit == 'F')
	    cout << "C " << (magnitude - 32)/1.8 << endl;

	else
	    cout << "F " << magnitude*1.8 + 32 << endl;
    }
}
