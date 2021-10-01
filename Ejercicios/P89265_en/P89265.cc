/*
Get two intervals

Print '1' if the fist is inside the second, '2' if the second is inside the
first, '=' if are the same intervals or '?' otherwise

Then, print the interval of intersection or tell if it is empty
*/

#include <iostream>

using namespace std;

int main() {
    int a1, b1, a2, b2;

    cin >> a1 >> b1 >> a2 >> b2;

    if (a1 == a2 and b1 == b2) cout << '=' << " , ";
    else if (a2 <= a1 and b2 >= b1) cout << '1' << " , ";
    else if (a1 <= a2 and b1 >= b2) cout << '2' << " , ";
    else cout << '?' << " , ";

    // start is the max of a1 and a2
    int start;
    if (a1 > a2) start = a1;
    else start = a2;

    // end is the min of b1 and b2
    int end;
    if (b1 < b2) end = b1;
    else end = b2;

    // if the start is minor than the end, print the data
    if (start <= end) cout << '[' << start << ',' << end << ']' << endl;
    else cout <<'[' << ']' << endl;
}