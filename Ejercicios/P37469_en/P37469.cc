/*
Get a natural number which is the total seconds
Calc the time in hours, minutes and seconds and print the three integers
in the format H:M:S
*/

#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    cout << n/3600 << " " << (n/60)%60 << " " << n%60 << endl;
}