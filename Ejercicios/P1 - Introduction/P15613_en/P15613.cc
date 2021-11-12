/*
Get integer

If it is < 10 print "it's cold" if it is <= 0 also print "water would freeze"
If it is > 30 print "it's hot" if it is >= 100 also print "water would boil"
If not print "it's ok"
*/

#include <iostream>

using namespace std;

int main() {
    int temperature;
    cin >> temperature;

    if (temperature < 10) {
        cout << "it's cold" << endl;

        if (temperature <= 0) {
        cout << "water would freeze" << endl;
        }
    }
    else if (temperature > 30) {
        cout << "it's hot" << endl;

        if (temperature >= 100) {
        cout << "water would boil" << endl;
        }
    }
    else {
        cout << "it's ok" << endl;
    }

}