/*
Get a n natural number and print n lines making a triangle
*/

#include <iostream>

using namespace std;

int main() {
    // n is a natural number
    int n;
    cin >> n;

    // For each line print '*' line number times
    for (int line = 1; line <= n; ++line) {
        for (int i = 1; i <= line; i++)
            cout << '*';

        cout << endl;        
    }
    
}