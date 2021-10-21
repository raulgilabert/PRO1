/*
Read a sequence of chars
- Increment y if char == 's'
- Decrement y if char == 'n'
- Increment x if char == 'e'
- Decrement x if char == 'w'

Print (x, y)
*/

#include <iostream>

using namespace std;

int main() {
    int x = 0, y = 0;

    // operate in x and y
    char direction;
    while (cin >> direction) {
	if (direction == 'n') --y;
	else if (direction == 's') ++y;
	else if (direction == 'e') ++x;
    	else --x;
    }
    
    cout << '(' << x << ", " << y << ')' << endl;
}
