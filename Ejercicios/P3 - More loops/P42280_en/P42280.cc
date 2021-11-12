/*
get two natural numers r and c, r for rows and c for columns. The read r lines 
with c chars between '0' and '9'. Print the sum of the numbers.
*/

#include <iostream>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    int sum = 0;

    // Read the data from the user and add the numbers to sum
    for (int i = 0; i < r; ++i) {
        for (int i2 = 0; i2 < c; ++i2) {
            char num;
            cin >> num;

            // Convert the char to the integer that represents
            sum += num - '0';
        }
    }

    cout << sum << endl;
}
