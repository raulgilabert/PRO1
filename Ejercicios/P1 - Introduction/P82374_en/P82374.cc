/*
Get five integers x, a, b, c, d

Print "yes" if x is inside [a,b] or inside [c,d]. If not, print "no"
*/

#include <iostream>

using namespace std;

int main() {
    int x, a, b, c, d;

    cin >> x >> a >> b >> c >> d;

    // if x inside [a,b] or inside [c,d] print "yes". If not, print "no"
    if ((x >= a and x <= b) or (x >= c and x <= d)) cout << "yes" << endl;
    else cout << "no" << endl;
}