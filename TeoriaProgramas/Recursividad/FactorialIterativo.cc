/*
Función que devuelve el factorial calculado de forma iterativa
*/

// Precondition:
// 	n >= 0
//
// Postcondition:
// 	returns n!
int factorial(int n) {
    int f = 1;
    int i = 0;

    while (i < n) {
	++i;
	f = f*i;
    }

    return f;
}
