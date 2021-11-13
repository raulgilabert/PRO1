/*
Function that returns the sum of the minimum and maximum of three integers
*/

#include <iostream>

using namespace std;

// Precondition:
// 	x integer
// 	y integer
//
// Postcondition:
// 	Return the maximum of x and y
int max2(int x, int y) {
    int max = x;

    if (y > max)
	max = y;

    return max;
}

// Precondition:
// 	x integer
// 	y integer
//
// Postcondition:
// 	Return the minimum of x and y
int min2(int x, int y) {
    int min = x;

    if (y < min)
	min = y;

    return min;
}

// Precondition:
// 	x integer
// 	y integer
// 	z integer
//
// Postcondition:
// 	Return the sum of the minimum of x, y and z and the maximum of x, y 
// 	and z
int sum_min_max(int x, int y, int z) {
    return min(min(x, y), z) + max(max(x, y), z);
}


int main() {
    int x, y, z;
    cin >> x >> y >> z;

    cout << sum_min_max(x, y, z) << endl;
}
