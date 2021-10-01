/*
Read a real number x≥0 and prints ⌊ x ⌋ (the floor of x), 
⌈ x ⌉ (the ceiling of x), and the rounding of x.
*/

#include <iostream>

using namespace std;

int main() {
    double input;

    cin >> input;


    if (input - int(input) != 0.0) {
        cout << int(input) << ' ' << int(input) + 1 << ' ';
    
        if (input - int(input) >= .5) cout << int(input) + 1 << endl;
        else cout << int(input) << endl;
    }
    else cout << int(input) << ' ' << int(input) << ' ' << int(input) << endl;
}