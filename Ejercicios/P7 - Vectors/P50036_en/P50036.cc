#include <vector>
#include <iostream>
#include <cmath>

using namespace std;


/*
int pow(int base, int exp) {
    int num = 1;
    for (int i = 0; i < exp; ++i) {
        num *= base;
    }
    return num;
}
*/

int evaluate(const vector<int>& p, int x) {
    int pSize = p.size(), num = 0;

    for (int i = 0; i < pSize; ++i)
        num += p[i]*pow(x, i);

    return num;
}


int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; ++i)
        cin >> p[i];

    int x;
    cin >> x;

    cout << evaluate(p, x) << endl;
}