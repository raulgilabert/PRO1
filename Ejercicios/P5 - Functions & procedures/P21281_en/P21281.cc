//
// Created by raulg on 11/17/21.
//

#include <iostream>

using namespace std;

/*
Create a procedure that with an n number stores in f the most frequent factor
 and in q the number of times that it appears. In case of a tie, choose the
 smallest factor.
*/


// Precondition:
//      n >= 2
//
// Postcondition:
//      f is the most frequent factor
//      q is the number of times it appears
void factor(int n, int& f, int& q) {
    int i = 2;
    f = q = 0;

    // Calc of the factors
    while (i*i <= n) {
        int counter = 0;

        while (n%i == 0) {
            n /= i;
            ++counter;

            if (counter > q) {
                q = counter;
                f = i;
            }
        }
        ++i;
    }

    if (q == 0 and f == 0) {
        q = 1;
        f = n;
    }
}

int main() {
    int n;

    while (cin >> n) {
        int f, q;

        factor(n, f, q);

        cout << f << ' ' << q << endl;
    }
}