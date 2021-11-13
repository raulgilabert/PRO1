/*
Function that return the distance from (0, 0) to (x, y)
*/

#include <iostream>
#include <cmath>

using namespace std;

// Precondition:
// 	x real number
// 	y real number
// Postcondition:
// 	returns hypotenuse of the triangle with the other sides x and y
double dist_or(double x, double y) {
    return sqrt(x*x + y*y);
}

int main() {
    double x, y;
    cin >> x >> y;

    cout << dist_or(x, y) << endl;
}

