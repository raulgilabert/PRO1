// Uso de while

/*
Aclaraciones:
    mcd = máximo común divisor

Algoritmo de Euclido rápido:

mcd(a, 0) = a

si b > 0
mcd(a, b) = mcd(b, a%b)
*/

#include <iostream>

using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b) {
        while (b > 0) {
            int temp;

            temp = b;
            b = a%b;
            a = temp;
        }

        cout << a << endl;
    }
}