/*
Función recursiva que devuelve el factorial

Definición de un factorial:
    n! = 1*2*...*(n-1)*n

Definición recursiva:
    Caso base:
	n = 0 -> n! = 1

	n > 0 -> n! = n*(n-1)!
*/

// Precondition:
// 	n >= 0
//
// Postcondition:
// 	returns n!
int factorial(int n) {
    if (n > 0)
	return n*factorial(n - 1);

    return 1;
}
