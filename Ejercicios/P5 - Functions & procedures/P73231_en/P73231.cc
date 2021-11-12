/*
Function that return the maximum of for integer numbers
*/

#include <iostream>

using namespace std;

int max2(int a, int b) {
    // Get the max number
    int max = a;

    if (b > max)
	max = b;

    return max;
}

int max4(int a, int b, int c, int d) {
    // Print the max of the four numbers
    return max2(max2(a, b), max2(c, d));
}

int main() {
    int a, b, c, d;

    while (cin >> a >> b >> c >> d)
	cout << max4( a, b, c, d) << endl;
}
