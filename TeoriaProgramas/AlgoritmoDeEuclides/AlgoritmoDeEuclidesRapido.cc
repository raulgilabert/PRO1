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

    cin >> a >> b;

    // se comprueba que b > 0, en caso afirmativo se ejecuta el while
    while (b > 0) {
        int temp;

        temp = b;
        // Se le da a b el valor de a%b
        b = a%b;
        // Se le da a a el valor de b (guardado previamente en la variable 
        // temp)
        a = temp;
    }

    cout << a << endl;
}