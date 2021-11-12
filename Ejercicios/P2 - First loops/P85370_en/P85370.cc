/*
Given an initial capitalcin euros, an annual interest ratei(expressed in %), a
timetin yearsand an indication whether the interest is simple or compound,
determine the amount ofeuros the initial capital is transformed into.
*/

#include <iostream>

using namespace std;

int main() {
    double capital = 0, interestRate = 0;
    int time = 0;
    string indicator;

    cin >> capital >> interestRate >> time >> indicator;

    // Fix digits after the decimal
    cout.setf(ios::fixed);
    cout.precision(4);

    // Calc interest simple
    if (indicator == "simple") 
        cout << capital + capital*time*interestRate/100 << endl;
    
    // Calc interest compound
    else {
        for (int i = 0; i < time; ++i) {
            capital += capital*interestRate/100;
        }

        cout << capital << endl;        
    }
}