/*
get n and m natural numbers and print a rectangle nxm with the numbers from 9 
to 0
*/

#include <iostream>

using namespace std;

int main() {
    int n, m;

    bool printEndl = false;
    while (cin >> n >> m) {
        if (printEndl) cout << endl;
        int counter = 9;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++ j) {
                cout << counter%10;

                --counter;

                if (counter == -1) counter = 9;
            }
            cout << endl;
        }
        printEndl = true;
    }
}