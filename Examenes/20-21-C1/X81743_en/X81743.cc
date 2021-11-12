/*
Read a number n and two chars c1 and c2 being c1 <= c2. Then read a sequence of 
> n elements and print the number of chars between c1 and c2 in the first n
elements of the sequence (both included)
*/

#include <iostream>

using namespace std;

int main() {
    int num;
    char c1, c2;

    cin >> num >> c1 >> c2;

    int counter = 0;
    for (int i = 0; i < num; ++i) {
	char letter;
	cin >> letter;

	if (letter >= c1 and letter <= c2)
	    ++counter;
    }

    cout << counter << endl;
}
