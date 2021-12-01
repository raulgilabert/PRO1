/*
 * Get a sequence of words and print it in reverse order and only a inputted
 * number of words
*/

#include <iostream>

using namespace std;


/*
 * Precondition:
 * 	number is a natural number
 *
 * Postcondition:
 * 	Returns the number of words printed
*/
int print_words(int number) {
    string word;

    if (cin >> word) {
	int num = print_words(number);
	if (num < number)
	    cout << word << endl;

	return num + 1;
    }

    return 0;
}

int main() {
    int num;
    cin >> num;

    print_words(num);
}
