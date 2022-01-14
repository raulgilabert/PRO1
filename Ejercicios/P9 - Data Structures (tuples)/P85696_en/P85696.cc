#include <iostream>

using namespace std;

struct Rational {
    int num, den;
};


int gcd(int a, int b) {
    if (b == 0)
	return a;

    return gcd(b, a%b);
}


Rational rational(int n, int d) {
    if (n == 0)
	d = 1;
    
    else {
	int gcd_num = gcd(n, d);

	n /= gcd_num;
	d /= gcd_num;
    }

    if (d < 0) {
	d = 0 - d;
	n = 0 - n;
    }

    Rational to_return;

    to_return.num = n;
    to_return.den = d;

    return to_return;
}
