/*
Get a number and the a sequence of positive numbers ended by -1

If the firsr number and a number of the sequence % 10 == 0 print the number of
the sequence and the index. If not, print "No existe"
*/

#include <iostream>

using namespace std;

int main() {
    // Get the first number
    int firstNum;
    cin >> firstNum;

    // Iterate in the sequence checking if (firstNum + secondNum)%10 == 0
    int counter = 1, secondNum;
    while (cin >> secondNum and (firstNum + secondNum)%10 != 0 and secondNum != -1)
        ++counter;
    
    if ((firstNum + secondNum)%10 == 0 and secondNum != -1)
	cout << secondNum << ": " << counter << endl;
    else
	cout << "No existe" << endl;
}

