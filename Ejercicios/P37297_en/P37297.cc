// Get a natural number and print the sum of the three last numbers

#include <iostream>

using namespace std;

int main() {
    int num;

    cin >> num;

    // Calc units + tens + hundreds
    cout << num%10 + (num/10)%10 + (num/100)%10 << endl;
}