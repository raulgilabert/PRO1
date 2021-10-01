/*
Get three integer numbers and print the maximum (the input numbers can be the
same)
*/

#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    cin >> x >> y >> z;

    int max = x;

    if (y > max) max = y;
    if (z > max) max = z;

    cout << max << endl;
}