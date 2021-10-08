#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    // Si el número es 1 (que no es primo), lo pone de esta manera, en caso contrario inicia la variable para entrar en el bucle de comprovación del número primo.
    bool primo = (num != 1);

    int i = 2;

    while(primo and i < num) {
        // Aquí comprueba que el módulo sea distinto a 0 y, en este caso, lo mantiene como true. En caso que este sea 0 pondrá la variable como true y saldrá del bucle.
        primo = num%i != 0;
        ++i;
    }

    if (primo)
        cout << num << " es primo" << endl;
    else
        cout << num << " no es primo" << endl;
    
}