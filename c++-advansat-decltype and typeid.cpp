#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main() {

	/*int value;*/
	/*double value;*/
	
	string value;

	/*cout << typeid(value).name() << endl;*/

	decltype(value) name = "bob";
	cout << typeid(value).name() << endl;

	cout << name << endl;


	return 0;
}