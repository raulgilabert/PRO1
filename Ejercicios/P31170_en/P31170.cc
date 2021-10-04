/*
Read a natural number n between 1 and 9 and print the multiplication table of 
this number
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Print the multiplication table
    for (int i = 1; i <= 10; ++i)
        cout << n << '*' << i << " = " << n*i << endl;
}