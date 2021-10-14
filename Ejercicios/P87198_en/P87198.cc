#include <iostream>

using namespace std;

int main() {
    int num;

    while (cin >> num) {
        for (int i = 0; i < 3*num - 2; ++i) {
            int white, x;

            // First part of the octagon
            if (i < num - 1) {
                white = num - 1 - i;
                x = num + 2*i;
            }

            // Middle part of the octagon
            else if (i > num - 2 and i < 2*num - 1) {
                white = 0;
                x = 3*num - 2;
            }

            // Last part of the octagon
            else {
                white = -2*num + i + 2;
                x = 7*num - 2*i - 6;
            }

            for (int j = 0; j < white; ++j) cout << ' ';
            for (int j = 0; j < x; ++j) cout << 'X';

            cout << endl;
        }
        cout << endl;
    }
}