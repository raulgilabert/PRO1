/*
Get two integers and print all the numbers between them in decreasing order
*/

#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    // Get the minimum and the maximum integer
    int min, max;
    if (x > y) {
        max = x;
        min = y;
    }
    else {
        max = y;
        min = x;
    }

    // Print the numbers in decreasing order
    for (int i = 0; i <= max-min; ++i) {
        cout << max - i << endl;
    }
    
}