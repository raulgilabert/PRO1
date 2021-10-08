#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    bool primo = true;

    int i = 2;

    while(primo and i < num) {
        if (num%i == 0) {
            primo = false;
        }
        ++i;
    }

    if (primo)
        cout << num << " es primo" << endl;
    else
        cout << num << " no es primo" << endl;
    
}