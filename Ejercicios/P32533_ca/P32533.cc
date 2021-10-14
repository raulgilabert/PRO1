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
        for (int j = 1; j < n - i; ++j) cout << '+';

        cout << '/';

        for (int j = n - i; j < n; ++j) cout << '*';

        cout << endl;        
    }
    
}
