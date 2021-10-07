/*
get two integers a, b and print the sum of the cubes of the number between a
and b
*/

#include <iostream> 

using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b) {
        int sum = 0;

        for (int i = a; i < b + 1; i++) {
            sum += i*i*i;
        }
        
        cout << "suma dels cubs entre " << a << " i " << b << ": " << sum << endl;
    }
}