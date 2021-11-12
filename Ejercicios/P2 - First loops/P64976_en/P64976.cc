/*
Get a natural number n and print the multiplication tamble of this number from 
1 to n
*/

#include <iostream>

using namespace std;

int main() {
    // n is a natural number
    int n;
    cin >> n;

    // Print the multiplication table
    for (int i = 1; i <= n; ++i)
    {
        cout << n << " x " << i << " = " << n*i << endl;
    }
    
}