/*
get an integer a and a natural b being b>0

Prints the division and the reminder of a divided by b
*/

#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if (a < 0 and a%b != 0) cout << a/b - 1;
    else cout << a/b;

    cout  << " " << (a%b + b)%b << endl;
}
