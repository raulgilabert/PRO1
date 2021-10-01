/*
Get a letter and print if it is lowercase or uppercase and if it is a consonant
or a vowel
*/

#include <iostream>

using namespace std;

int main() {
    char letter;
    cin >> letter;

    // Check if letter is lowercase or uppercase
    if (letter >= 'a' and letter <= 'z') 
        cout << "lowercase" << endl;
    else
        cout << "uppercase" << endl;


    // Check if letter is a vowel or a consonant
    if (letter == 'A' or letter == 'a' or letter == 'E' or letter == 'e' or 
        letter == 'I' or letter == 'i' or letter == 'O' or letter == 'o' or 
        letter == 'U' or letter == 'u')
        cout << "vowel" << endl;
    else
        cout << "consonant" << endl;
}
