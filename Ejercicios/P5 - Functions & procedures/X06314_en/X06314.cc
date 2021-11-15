/*
Input: a sequence of sequences of positive integer numbers ended every
 sequence with a 0 and the last sequence is empty

Output: The number of similar sequences with the first

A sequence is similar to another if the sum of the element of the two
 sequences are equal and the same with the last element
*/

#include <iostream>

using namespace std;


/*
Precondition:
     sum positive integer
     last positive integer
Postcondition:
      The sum of the elements and the last one
*/
void info_sequence(int& sum, int& last) {
    // num is a natural number
    int num;
    cin >> num;

    sum = 0;

    while(num != 0) {
        sum += num;
        last = num;
        cin >> num;
    }
}


int main() {
    int sumFirst, lastFirst, counter = 1;
    info_sequence(sumFirst, lastFirst);

    // Initialize sumNext and lastNext with a value other than 0 to enter the
    // loop and change it immediately inside
    int sumNext = 1, lastNext = 0;

    //
    while (sumNext != 0) {
        info_sequence(sumNext, lastNext);
        if (sumFirst == sumNext and lastFirst == lastNext)
            ++counter;
    }

    cout << counter << endl;
}