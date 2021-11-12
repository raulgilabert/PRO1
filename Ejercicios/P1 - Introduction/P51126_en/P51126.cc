/*
Get two intervals and print the interval of intersection or tell if it is empty
*/

#include <iostream>

using namespace std;

int main() {
    // get the two intervals from the users
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    
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
