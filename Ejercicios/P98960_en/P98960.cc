/*
Read a letter and print it in lowercase if input is in uppercase or in 
uppercase if input in lowercase
*/

#include <iostream>

using namespace std;

int main() {
    char input;

    cin >> input;

    // Check if char is lowercase and print it on uppercase
    if (input >= 'a' and input <= 'z') cout << char(input - 'a' + 'A') << endl;
    // Check if char is uppercase and print it on lowercase
    else cout << char(input - 'A' + 'a') << endl;
}