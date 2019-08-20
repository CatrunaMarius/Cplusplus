#include <iostream>
#include <string>
using namespace std;

void testgreet(void(*greet)(string)) {
	greet("bob");
}

void rundivide(double(*divide)(double a, double b)) {
	auto rval = divide(9, 3);
	cout << rval << endl;
}

int main() {

	auto pgreet =[](string name){
		cout << "hello " << name << endl;
	};

	pgreet("Mike");

	testgreet(pgreet);


	auto pdivide = [](double a, double b)->double {
		
		if (b == 0.0) { 
			return 0; 
		}
		return a / b;
	};

	cout << pdivide(10.0, 5.0) << endl;
	cout << pdivide(10.0, 0) << endl;

	rundivide(pdivide);

	return 0;
}