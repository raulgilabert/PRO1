/*
Get a sequence of '(' and ')' and print "yes" if the parentheses are correctly 
closed and "no" if not
*/

#include <iostream>

using namespace std;

int main() {
    char par;

    int counterStart = 0, counterEnd = 0;
    // if there is input and all the parentheses are well closed or there are 
    // more starts than ends
    while(cin >> par and counterEnd <= counterStart) {
        if (par == '(') ++counterStart;
        else ++counterEnd;
    }

    if (counterStart == counterEnd) cout << "yes" << endl;
    else cout << "no" << endl;
}