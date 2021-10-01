#include <iostream>

using namespace std;

int main() {
    int h, m, s;

    cin >> h >> m >> s;

    s += m*60;
    s += h*3600;
    s++;

    h = (s/3600)%24;
    m = (s%3600)/60;
    s = s%60;

    cout << h << ":" << m << ":" << s << endl;
}