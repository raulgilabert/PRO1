/*
Get a number and then a sequence of positive numbers ended by -1

If the first number and a number of the sequence % 10 == 0 print the number of
the sequence and the index. If not, print "No existe"
*/

#include <iostream>

using namespace std;

int main() {
    // Get the first number
    int firstNum;
    cin >> firstNum;

    bool found = false;
    int secondNum;

    cin >> secondNum;

    // Iterate in the sequence checking if (firstNum + secondNum)%10 == 0
    int counter = 1;
    while (not found and secondNum != -1) {
	if ((firstNum + secondNum)%10 != 0) {
	    ++counter;
	    cin >> secondNum;
	}

	else
	    found = true;
    }

    if (found)
	cout << secondNum << ": " << counter << endl;
    else
	cout << "No existe" << endl;
}
