/*
* Tell if a string is a palindrome
*/


#include <string>
#include <iostream>

using namespace std;

/*
 * Precondition:
 * 	string s
 *
 * Postcondition:
 * 	Returns true if s is a palindrome or false if not
*/
bool is_palindrome(const string& s) {
    int size = s.length();
    int pos = size/2;

    bool palindrome = true;

    int i = 0;
    while (palindrome and i < pos) {
	if (s[i] != s[size - 1 - i])
	    palindrome = false;

	++i;
    }


    return palindrome;
}


int main() {
    string s;

    cin >> s;

    cout << is_palindrome(s) << endl;
}

