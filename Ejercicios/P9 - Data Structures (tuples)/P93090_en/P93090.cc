#include <iostream>

using namespace std;


struct Fraction {
    int num, den;
};


int gcd(int a, int b) {
    if (b == 0)
	return a;

    return gcd(b, a%b);
}


int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}


void normalize(Fraction& num) {
    if (num.num == 0)
	num.den = 1;
    
    else {
	int gcd_num = gcd(num.num, num.den);

	num.num /= gcd_num;
	num.den /= gcd_num;
    }
}


Fraction addition(const Fraction& x, const Fraction& y) {
    Fraction result;

    int lcm_num = lcm(x.den, y.den);

    result.den = lcm_num;
    result.num = x.num*(lcm_num/x.den) + y.num*(lcm_num/y.den);

    normalize(result);

    return result;
}


void operate(Fraction& num, char op) {
    if (op == '+') {
	Fraction num2;

	cin >> num2.num >> op >> num2.den;

	num = addition(num, num2);
    }
    else {
	cout << num.num << '/' << num.den << endl;
    }
}


int main() {
    Fraction num;

    char op;
    
    cin >> num.num >> op >> num.den;

    while (cin >> op) {
	operate(num, op);
    }
}



