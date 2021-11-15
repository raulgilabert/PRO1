/*
Action that decompose a given time in seconds
*/

#include <iostream>

using namespace std;

// Precondition:
// 	n natural number
//
// Postcondition:
// 	0 <= h
// 	0 <= m < 60
// 	0 <= s < 60
void  decompose(int n, int& h, int& m, int& s) {
    s = n%60;
    n /= 60;
    m = n%60;
    h = n/60;
}

int main() {
    int h, m, s, n;
    cin >> n;
    decompose(n, h, m, s);
    cout << h << ' ' << m << ' ' << s << endl;
}
