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
        if (word > secondLargest and word != largest) {
            // if the word is largest than the largest it is the new largest 
	    // and the previous one is the second largest
            if (word > largest) {
                secondLargest = largest;
                largest = word;
            }
            // if the word is minor than the largest the word is the new second 
            // largest
            else {
                secondLargest = word;
            }
        }
    }

    if (secondLargest != "") cout << secondLargest << endl;
}
