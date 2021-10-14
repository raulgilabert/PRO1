/*
Get a and b natural numbers and print a^b
*/

#include <iostream>

using namespace std;

int main() {
    int a, b;
    
    while (cin >> a >> b) {
        int power = 1;

        // While b > 0
        while (b > 0) {
            power *= a;
            --b;
        }

        cout << power << endl;
    }
    
}