/*
Get a sequence of '(' and ')' and print "yes" if the parentheses are correctly 
closed and "no" if not
*/

#include <iostream>

using namespace std;

int main() {
    char par;

    int counter = 0;
    // if there is input and all the parentheses are well closed or there are 
    // more starts than ends
    while(counter >= 0 and cin >> par) {
        if (par == '(') ++counter;
        else --counter;
    }

    if (counter == 0) cout << "yes" << endl;
    else cout << "no" << endl;
}
