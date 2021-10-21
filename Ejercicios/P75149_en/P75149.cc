/*
Get a sequence of chars ended by '.' and print if the sequence has any 
lowercase 'a'
*/

#include <iostream>

using namespace std;

int main() {
    char letter;

    cin >> letter;

    // check if the letter is a before reaching the . and if it is, stop the 
    // loop
    while (letter != '.' and letter != 'a') cin >> letter;
 
    if (letter == 'a') cout << "yes" << endl;
    else cout << "no" << endl;
}
