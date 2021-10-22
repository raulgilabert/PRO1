/*
Imprimir el número de elementos de la secuencia de números consecutivos en orden creciente
*/

#include <iostream>

using namespace std;

int main() {
    int counter = 0, n, nPrev = 0;

    while (cin >> n) {
	if (n > nPrev) counter++;
	nPrev = n;
	cout << counter << endl;
    }
}
