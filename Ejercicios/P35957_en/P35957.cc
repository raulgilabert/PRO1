/*
Read a natural number n and then a sequence of 2n integers. If the middle digit
of one number is different than the middle digit of the previous one, the 
player looses
*/

#include <iostream>

using namespace std;

int getMiddleDigit(int num) {
    int iMiddleDigit = 1;
    int numProcess = num;
    while (numProcess / 10 != 0) {
	++iMiddleDigit;
	numProcess /= 10;
    }

    iMiddleDigit = iMiddleDigit/2;

    cout << iMiddleDigit << endl;

    int multiplier = 1;

    for (int i = 0; i < iMiddleDigit; ++i) multiplier *= 10;

    cout << multiplier << endl;
    cout << num/multiplier << endl;

    return (num/multiplier)%10;
}

int main() {
    cout << getMiddleDigit(23454) << endl;
}
