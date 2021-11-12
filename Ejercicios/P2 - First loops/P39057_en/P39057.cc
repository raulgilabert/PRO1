/*
Get a n number which is the number of figures to calc tha area. Then get n
times a line with a word "rectangle" or "circle". If the word is "rectangle",
then get the length and the width. If the word is "circle" then get the radius

With this data, calc the area with 6 digits after the decimal point
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // n is the number of descriptions
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        // Read the description
        string descript;
        cin >> descript;

        // Declare area variable because it will be used after the if
        double area;

        // Rectangle
        if (descript == "rectangle") {
            double length, width;
            cin >> length >> width;

            area = length*width;
        }

        // Circle
        else {
            double radius;
            cin >> radius;

            // Calc the area
            area = M_PI * radius * radius;
        }

        // Fix decimals to 6
        cout.setf(ios::fixed);
        cout.precision(6);

        // Print circle area
        cout << area << endl;
    }
    
}