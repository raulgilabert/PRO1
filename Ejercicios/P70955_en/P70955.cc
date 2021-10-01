/*
Get five natural numbers that represenys the years, days, hours, minutes and
seconds

Print the total of seconds
*/

#include <iostream>

using namespace std;

int main() {
    int y, d, h, m, s;

    cin >> y >> d >> h >> m >> s;

    cout << s + m*60 + h*3600 + d*24*3600 + y*365*24*3600 << endl;
}
