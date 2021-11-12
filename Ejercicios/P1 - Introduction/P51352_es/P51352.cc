/*
Get two chars.

'A' wins 'P', 'P' wins 'V' and 'V' wins 'A'

Print '1' if the winner is the first, '2' if the winner is the second and
'-' if there is a tie
*/

#include <iostream>

using namespace std;

int main() {
    char a, b;

    cin >> a >> b;

    if ((a == 'A' and b == 'P') or (a == 'P' and b == 'V') or (a == 'V' and 
    b == 'A')) cout << '1' << endl;
    else if (a == b) cout << '-' << endl;
    else cout << '2' << endl;
}