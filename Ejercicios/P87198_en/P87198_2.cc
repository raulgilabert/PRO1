#include <iostream>

using namespace std;

int main() {
    int num;

    cin >> num;

    // height = 3*num - 2
    // white size = num - 1
    // distance top white = height - white_size

    for (int i = 0; i < 3*num - 2; ++i) {
        int white, x;

        //  i < white size -> white = white size - i
        if (i < (num - 1)) 
            white = (num - 1) - i;

        //  i >= height - white size   ->    white = i - distance top white + 1
        else if (i >= 3*num - 2 - (num - 1)) 
            white = i - (3*num - 2 - (num - 1)) + 1;

        else 
            white = 0;
            
        // x = max size of row - the white space on left and right
        x = 3*num - 2 - white*2;

        for (int j = 0; j < white; ++j) cout << ' ';
        for (int j = 0; j < x; ++j) cout << 'X';

        cout << endl;
    }
    cout << endl;
}