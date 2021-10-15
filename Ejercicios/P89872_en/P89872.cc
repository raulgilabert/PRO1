/*
Get a sequence of strings and print the second largest word in alphabetical 
order
*/

#include <iostream>

using namespace std;

int main() {
    string largest = "", secondLargest = "", word;

    while (cin >> word) {
        // if the word is largest than the second largest it will be the second 
        // or the largest
        if (word > secondLargest) {
            // if the word is largest than the largest it is the new largest and the previous one is the second largest
            if (word > largest) {
                secondLargest = largest;
                largest = word;
            }
            // if the word is minot than the largest the word is the new second 
            // largest
            else if (word < largest) {
                secondLargest = word;
            }
        }
    }

    cout << secondLargest << endl;
}