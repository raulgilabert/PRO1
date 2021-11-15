/*
Return if the first fraction is strictly minor than the second
*/

#include <iostream>

using namespace std;

// Precondition:
// 	n1 integer
// 	n2 integer
// 	d1 integer > 0
// 	d2 integer > 0
//
// Postcondition:
// 	Return if the first fraction is minot than the second
bool c_frac(int n1, int d1, int n2, int d2) {
    return (n1/double(d1) < n2/double(d2));
}

int main() {
    int n1, d1, n2, d2;
    cin >> n1 >> d1 >> n2 >> d2;

    cout << c_frac(n1, d1, n2, d2) << endl;
}
