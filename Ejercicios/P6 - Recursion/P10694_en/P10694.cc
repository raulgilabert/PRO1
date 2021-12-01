#include <iostream>

using namespace std;

// Precondition:
// 	n >= 1
//
// Postcondition:
// 	Draw of bars
void draw(int n) {
    if (n > 0) {
	draw(n - 1);
	draw(n - 1);
	// Draw the middle bar
	for (int i = 0; i < n; ++i)
	    cout << '*';

	cout << endl;
    }
}


int main() {
    int n;
    cin >> n;
    draw(n);
}
