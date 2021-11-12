/*
Function that returns the number of 'a' in a sequence
*/

#include <iostream>

using namespace std;

int is_a() {
    char letter;
    cin >> letter;

    if (letter == 'a')
	return 1 + is_a();

    else if (letter == '.')
	return 0;

    return 0 + is_a();
}

int main() {
    cout << is_a() << endl;
}
