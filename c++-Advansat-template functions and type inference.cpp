#include <iostream>
#include <string>
using namespace std;

template<class T>
void print(T n) {
	cout << "template version: " << n << endl;
}

void print(int value) {
	cout << "non-template version: " << value << endl;
}

template<class T>
void show() {
	cout << T() << endl;
}


int main() {

	print<string>("hello");
	print<int>(5);

	print("hi there");

	print(6);

	show<double>();


	return 0;
}