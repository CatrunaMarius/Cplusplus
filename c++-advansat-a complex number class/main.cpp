#include <iostream>
#include <string>
#include "complex.h"
#include <ccomplex>
#include <complex>

using namespace std;
using namespace marius;

int main() {


	Complex c1(2,3);
	Complex c2(c1);
	
	Complex c3;

	c3 = c2;

	cout << c2 << endl;


	return 0;
}