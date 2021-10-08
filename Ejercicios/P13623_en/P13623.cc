/*
get two natural numers r and c, r for rows and c for columns. The read r lines 
with c chars between '0' and '9'. Print the sum of the numbers that are in 
white squares being the top-left one white.
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

            /* 
            If the square is white add to sum
            In odd lines the white squares are in odd positions and in even 
            lines the white squares are in even positions
            */
            if (i2%2 == i%2) sum += num - '0';
        }
    }

    cout << sum << endl;
}
