#include <iostream>
#include <vector>

using namespace std;


void update_freq(vector<int>& v, int x, int b) {
    while (x != 0) {
        ++v[x%b];
        x /= b;
    }
}

bool is_stable(int x, int y, int b) {
    vector<int> v (b, 0);
    update_freq(v, x, b);
    update_freq(v, y, b);

    vector<int> v_res (b, 0);
    update_freq(v_res, x * y, b);
    bool is_perfect = true;
    for (int i = 0; i < b; ++i) {
        if (v[i] != 0 and v_res[i] != v[i])
            is_perfect = false;
    }
    return is_perfect;
}



void  print_in_base(int x, int b) {
    if (x != 0) {
        print_in_base(x/b, b);
        cout << uppercase << hex << x%b;
    }
}

int main() {
    int x, y;
    while (cin >> x >> y) {
        bool match = false;
        cout << "solutions for " << x << " and " << y << endl;
        for (int i = 2; i <= 16; ++i) {
            if (is_stable(x, y, i)) {
                match = true;
                print_in_base(x, i);
                cout << " * ";
                print_in_base(y, i);
                cout  << " = ";
                print_in_base(x * y, i);
                cout << dec << " (base " << i << ')' << endl;
            }
        }
        if (not match)
            cout << "none of them" << endl;
        cout << endl;
    }
}