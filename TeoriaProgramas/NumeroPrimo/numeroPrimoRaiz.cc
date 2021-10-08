#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    bool primo = (num != 1);

    int i = 2;

    // De esta manera con i*i <= num vemos si el cuadrado de i es igual o menor a num. Si es igual entonces i es la raíz cuadrada de num, de forma que este es el último número a comprobar para ver si el número es primo.
    while(primo and i*i <= num) {
        primo = num%i != 0;
        ++i;
    }

    if (primo)
        cout << num << " es primo" << endl;
    else
        cout << num << " no es primo" << endl;
    
}