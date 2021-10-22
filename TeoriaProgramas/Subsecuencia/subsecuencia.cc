/*
Teniendo una seucencia de secuencias de números acabas en 0, avisar en caso de
que una de las subsecuencias den 50 o más
*/

#include <iostream>

using namespace std;

int main() {
    int num;
    bool found = false;

    // La secuencia inicial. Este cin solo se aplica al inicio de cada línea, 
    // ya que hasta llegar a 0 eso se ejecuta en la subsecuencia interna
    while (not found and cin >> num) {
	int sum = 0;

	// Teniendo ya el primer valor de num, se van sumando los números que
	// se van leyendo a sum mientras num sea diferente de 0, de forma que
	// todos los números entre el primero que ha sido insertado en el cin
	// de la condición del primer while hasta 0
	while (num != 0) {
	    sum += num;
	    
	    cin >> num;
	}

	if (sum >= 50) found = true;
    }

    if (found) cout << "Found" << endl;
    else cout << "Not found" << endl;
}

