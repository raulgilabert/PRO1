/*
Get a n natural number and print the sum of the squares of the numbers between
1 and n
*/

#include <iostream>

using namespace std;

int sum(int x) {
    // if the input is higher than 0 redo the loop substracting 1 to the input
    if (x > 0) return x * x + sum(x - 1);
    // if the input is 0 return 0 to break the loop    
    else return 0;
}

int main() {
    // n is a natural number
    int n;
    cin >> n;

    cout << sum(n) << endl;
}