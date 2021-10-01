/*
Get two words a and b and print a line telling if a < b, a > b or a = b
*/

#include <iostream>

using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    if (a < b) cout << a << " < " << b << endl;
    else if (a > b) cout << a << " > " << b << endl;
    else cout << a << " = " << b << endl;
}