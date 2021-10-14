#include <iostream>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        // first part
        /*
           XXXX
          XXXXXX
         XXXXXXXX
        XXXXXXXXXX
        */

        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < n - i; ++j) cout << ' ';
            cout << 'X';
            for (int j = n - i; j < n + n - 1 + i; ++j) cout << 'X';
            cout << endl;
        }

        // middle part
        /*
        XXXXXXXXXX
        XXXXXXXXXX
        XXXXXXXXXX
        */

        for (int i = 0; i < n - 2; ++i) {
            for (int j = 0; j < 3*n - 2; ++j) {
                cout << 'X';
            }
            cout << endl;
        }

        // last part
        /*
        XXXXXXXXXX
         XXXXXXXX
          XXXXXX
           XXXX
        */
        for (int i = n - 1; i > -1; --i) {
            for (int j = 1; j < n - i; ++j) cout << ' ';
            cout << 'X';
            for (int j = n - i; j < n + n - 1 + i; ++j) cout << 'X';
            cout << endl;
        }
        cout << endl;
    }
}