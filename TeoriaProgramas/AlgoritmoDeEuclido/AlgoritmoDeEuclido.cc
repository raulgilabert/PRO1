// Uso de while

/*
Aclaraciones:
    mcd = máximo común divisor

Algoritmo de Euclido:

mcd(a, a) = a

si a > b
mcd(a, b) = mcd(a-b, b)

si b < a
mcd(a, b) = mcd(a, b-a)
*/

#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    // Compruebo que a no sea igual que b, de forma que no se puede ejecutar
    // mcd(a, a) = a
    while (a != b) {
        // En el caso que a > b se ejecuta la función mcd(a, b) = mcd(a - b, b)
        if (a > b) a -= b;

        // En el caso que a > b se ejecuta la función mcd(a, b) = mcd(a, b - a)
        else b -= a;
    }

    // Se llega aquí una vez que a == b y se imprime a ya que mcd(a, a) = a
    cout << a << endl;
}