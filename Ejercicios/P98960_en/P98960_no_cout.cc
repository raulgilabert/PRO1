/*
Read a letter and print it in lowercase if input is in uppercase or in 
uppercase if input in lowercase
*/

#include <iostream>

using namespace std;

int main() {
    char c;

    cin >> c;

    // Check if char is lowercase and print it on uppercase
    if (c >= 'a' and c <= 'z') c = c - 'a' + 'A';
    // Check if char is uppercase and print it on lowercase
    else c = c - 'A' + 'a';

    cout << c << endl;
}