/*
Get a sequence of strings and print the number of them betweet "beginning" and
"end". If them are not in that order print instead "wrong sequence"
*/

#include <iostream>

using namespace std;

int main() {
    bool start = false;

    // read the words until the end
    string word;
    int counter = 0;
    while(cin >> word and word != "end") {
        if (start) ++counter;

        if (word == "beginning") start = true;
    }

    if (start and word == "end") cout << counter << endl;
    else cout << "wrong sequence" << endl;
}