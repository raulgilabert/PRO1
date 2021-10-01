// Get three integers: hours < 24, minutes < 60, seconds < 60
// Print the hour in format HH:MM:SS adding one second to input time 

#include <iostream>

using namespace std;

int main() {
    // get hour from the user
    int hours, minutes, seconds;
    cin >> hours >> minutes >> seconds;

    seconds += 1;

    // convert to correct time
    if (seconds >= 60) {
        minutes++;
        seconds %= 60;
    }    
    if (minutes >= 60) {
        hours++;
        minutes %= 60;
    }
    if (hours >= 24) {
        hours %= 24;
    }

    if (hours < 10) cout << "0";
    cout << hours << ":";

    if (minutes < 10) cout << "0";
    cout << minutes << ":";

    if (seconds < 10) cout << "0";
    cout << seconds << endl;
}