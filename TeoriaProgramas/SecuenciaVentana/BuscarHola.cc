/*
Dada una secuencia de chars hay que buscar "hola" dentro de esta y mientras no
haya un '.'
*/

#include <iostream>

using namespace std;

int main() {
    char newChar, first, second, third, fourth;

    cin >> newChar;

    bool found = false;
    while (not found and newChar != '.') {
	found = (first == 'h' and second == 'o' and third == 'l' and fourth == 
		'a');
    
	first = second;
	second = third;
	third = fourth;
	fourth = newChar;
	
	cin >> newChar;
    }
    
    if (found) cout << "Found" << endl;
    else cout << "Not found" << endl;
}
