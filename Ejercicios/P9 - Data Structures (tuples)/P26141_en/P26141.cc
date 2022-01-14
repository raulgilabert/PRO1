// Get a first rational number and then a sequence of operations and another
// rational number, operating with the result of the last operation/rational
//
// Example:
//
// Input:		Operation:		Output:
// 1 2						1/2
// add 5 2		1/2 + 5/2		3
// substract 2 1	3 - 2/1			1
// multiply 10 1	1 * 10/1		10
// divide 3 1		10 / 3/1		10/3

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


int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}


void normalize(Rational& num) {
    if (num.num == 0)
	num.den = 1;
    
    else {
	int gcd_num = gcd(num.num, num.den);

	num.num /= gcd_num;
	num.den /= gcd_num;
    }

    if (num.den < 0) {
	num.den = 0 - num.den;
	num.num = 0 - num.num;
    }
}


Rational add(const Rational& a, const Rational& b) {
    Rational to_return;

    int lcm_num = lcm(a.den, b.den);

    to_return.den = lcm_num;
    to_return.num = a.num*(lcm_num/a.den) + b.num*(lcm_num/b.den);

    normalize(to_return);

    return to_return;
}


Rational substract(const Rational& a, const Rational& b) {
    Rational to_return;

    int lcm_num = lcm(a.den, b.den);

    to_return.den = lcm_num;
    to_return.num = a.num*(lcm_num/a.den) - b.num*(lcm_num/b.den);

    normalize(to_return);
    return to_return;
}


Rational multiply(const Rational& a, const Rational& b) {
    Rational to_return;

    to_return.num = a.num*b.num;
    to_return.den = a.den*b.den;

    normalize(to_return);
    return to_return;
}


Rational divide(const Rational& a, const Rational& b) {
    Rational to_return;

    to_return.num = a.num*b.den;
    to_return.den = a.den*b.num;

    normalize(to_return);
    return to_return;
}


void print(const Rational& num) {
    cout << num.num;

    if (num.den != 1)
	cout << '/' << num.den;

    cout << endl;
}


int main() {
    Rational num;
    cin >> num.num >> num.den;
    normalize(num);

    print(num);

    string operation;

    while (cin >> operation) {
	Rational input;
	cin >> input.num >> input.den;

	normalize(input);

	if (operation == "add")
	    num = add(num, input);
	else if (operation == "substract")
	    num = substract(num, input);
	else if (operation == "multiply")
	    num = multiply(num, input);
	else
	    num = divide(num, input);

	print(num);
    }
}





