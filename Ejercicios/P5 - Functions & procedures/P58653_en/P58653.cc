//
// Created by raulgilabert on 11/16/21.
//

#include <iostream>

using namespace std;

/*
Input: A char

Output: If the char is a letter, a vowel, a consonant, uppercase, lowercase
 and a digit
*/


// Precondition:
//      c is a letter or a digit or a punctuation mark
//      s is a string
//      b is a bool
//
// Postcondition:
//      prints the data formatted
void print_line(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}


int main() {
    char letter;
    cin >> letter;

    // Check if it is a letter, uppercase and a vowel
    bool isLetter = ((letter <= 'z' and letter >= 'a') or (letter <= 'Z' and
            letter  >= 'A'));

    bool uppercase = (letter <= 'Z' and letter >= 'A');

    bool vowel = (letter == 'a' or letter == 'e' or letter == 'i' or letter
            == 'o' or letter == 'u');

    if (uppercase and isLetter) {
        letter -= 'A';
        letter += 'a';

        vowel = (letter == 'a' or letter == 'e' or letter == 'i' or letter ==
                'o' or letter == 'u');
        letter += 'A';
        letter -= 'a';
    }

    // Print the data
    print_line(letter, "letter", isLetter);
    print_line(letter, "vowel", (isLetter and vowel));
    print_line(letter, "consonant", (isLetter and not vowel));
    print_line(letter, "uppercase", (uppercase and isLetter));
    print_line(letter, "lowercase", not uppercase and isLetter);
    print_line(letter, "digit", (not (isLetter or not (letter <= '9' and
        letter >= '0'))));
}