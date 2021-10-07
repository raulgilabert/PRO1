/*
Get a n natural number being n >= 2 and a serie of natural number x1, x2, ...,
xn and use the formula 

1/(n-1)*sum(x1², x2², ..., xn²) - 1/(n*(n-1))*(sum(x1, x2, ...,xn))²
*/

#include <iostream>

using namespace std;

int main() {
    // n is a natural number >= 2
    int n;
    cin >> n;

    double sum1 = 0, sum2 = 0;
    
    for (int i = 0; i < n; ++i) {
        double x;
        cin >> x;

        // Increases the sumatories
        sum1 += x*x;
        sum2 += x;
    }

    // Apply the formula
    double num = 1/double(n-1)*sum1 - 1/double(n*(n-1))*sum2*sum2;

    // Set precision to 2 digits after de decimal point
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << num << endl;
}