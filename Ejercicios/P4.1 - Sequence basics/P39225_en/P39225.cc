/*
Get an integer i and a sequence of numbers and print the number in the i 
position of the sequence
*/

#include <iostream>

using namespace std;

int main() {
    // pos is a natural number
    int pos;
    cin >> pos;

    int n;
    // read from 1 to i
    for (int i = 0; i < pos; ++i) cin >> n;
    cout << "At the position " << pos << " there is a(n) " << n << '.' << endl;
}
