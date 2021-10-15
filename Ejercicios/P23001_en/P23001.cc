/*
Get a sequence of strings and print the lenght of the longest sequence of the 
first word
*/

#include <iostream>

using namespace std;

int main() {
    string word, firstWord;

    int counter = 1, longestSequence = 1;

    // add the first word
    cin >> firstWord;

    while (cin >> word) {
        // if the word is the same as the first one increase the counter, if
        // not set, if the counter is higher than the longest lenght set the 
        // var to the counter value ans set the counter to 0
        if (word == firstWord) {
            ++counter;
            if (longestSequence < counter) longestSequence = counter;
        }
        else {
            counter = 0;
        }
    }

    cout << longestSequence << endl;
}