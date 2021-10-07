/*
Get a k number from 1 to 10⁸ and print a line with the text "Base x: y cifras."
where x is the base (being it fron 2 to 16) and y the number of digits of k in
base x.
*/

#include <iostream>

using namespace std;

int main() {
    // k is a natural number from 1 to 10⁸
    int k;
    cin >> k;

    for (int x = 2; x <= 16; ++x) {
        // Var num is k and modifiable
        int num = k;

        int counter = 0;

        // Convert number to base x
        while (num != 0) {
            ++counter;
            num /= x;
        }

        cout << "Base " << x << ": " << counter << " cifras." << endl;
    }
    
}