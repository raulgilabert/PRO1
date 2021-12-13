#include<iostream>
#include<vector>

using namespace std;

bool is_prime (int n, int d) {
    // base case
    if (n < 2) return false;
    else if (n%d == 0 and n != d) return false;
    else if (d*d > n) return true;
    // general case
    return is_prime(n, ++d);
}

void read_data(vector<int>& v) {
    int v_size = v.size();
    for (int i = 0; v_size > i; ++i) {
        cin >> v[i];
    }
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v (n);
        read_data(v);
        bool match = false;
        int i = 0;
        while (not match and i < n) {
            int j = i;
            while (not match and j < n) {
                if (j != i and is_prime(v[i] + v[j], 2))
                    match = true;
                ++j;
            }
            ++i;
        }
        if (match) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
