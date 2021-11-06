/*
Get three integers 0 <= hours < 24 0 <= minutes < 60 and delay >= 0 and print 
the sum of the time and the delay in format HH:MM
*/

#include <iostream>

using namespace std;

int main() {
    // The three numbers are natural numbers
    int hours, minutes, delay;
    cin >> hours >> minutes >> delay;

    // Add the delay
    minutes += delay;

    // Convert the hours to valid HH:MM
    hours += minutes/60;
    hours %= 24;
    minutes %= 60;

    cout << hours/10 << hours%10 << ':' << minutes/10 << minutes%10 << endl;
}
