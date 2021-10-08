/*
Get and n integer and print a figure n*n
*/

#include <iostream>

using namespace std;

int main() {
    // n is a natural number
    int n;
    cin >> n;

    // Print the figure
    for (int i = 0; i < n; ++i) {
        int j;
        for (j = 1; j < n - i; ++j) cout << '+';

        cout << '/';

        for (int h = j; h < n; ++h) cout << '*';

        cout << endl;        
    }
    
}
