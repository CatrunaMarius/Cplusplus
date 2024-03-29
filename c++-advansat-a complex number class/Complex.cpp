#include "complex.h"

 namespace marius{

ostream &operator<<(ostream &out, const Complex&c) {
	out << "(" << c.getreal() << "," << c.getimaginary() << ")";
	return out;
}

Complex::Complex() :real(0), imaginary(0)
{
}

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {

}

Complex::Complex(const Complex &other) {
	//cout << "copy" << endl;
	real = other.real;
	imaginary = other.imaginary;

}

const Complex &Complex::operator=(const Complex &other) {

	real = other.real;
	imaginary = other.imaginary;

	return *this;
}
}