/*
Swap two variables
*/

#include <iostream>

using namespace std;

// Precondition:
// 	a integer
// 	b integer
//
// Postcondition:
// 	a and b swapped
void swap2(int& a, int& b) {
    int temp = a;

    a = b;
    b = temp;
}

int main() {
    int a, b;
    cin >> a >> b;
    swap2(a, b);
    cout << a << ' ' << b << endl;
}
