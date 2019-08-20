#pragma once
#include<iostream>
using namespace std;
namespace marius {
	class Complex
	{
	private:
		double real;
		double imaginary;

	public:
		Complex();
		Complex(double real, double imaginary);
		Complex(const Complex &other);
		const Complex &operator=(const Complex &other);

		double getreal() const {
			return real;
		}
		double getimaginary() const {
			return imaginary;
		}
	};
}