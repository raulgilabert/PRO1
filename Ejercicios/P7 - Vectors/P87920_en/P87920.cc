#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n;
    while (cin >> n) {
        vector<int> v (n);
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            sum += v[i];
        }

        bool match = false;
        int i = 0;
        while (i < n and not match) {
            if (sum - v[i] == v[i])
                match = true;
            ++i;
        }

        if (match) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}