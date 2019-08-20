#include <iostream>
#include <string>
using namespace std;




int main() {
 
	int one = 1;
	int two = 2;
	int three = 3;

	/*[]() {cout << "hello" << endl; }();*/
	/*[one]() {cout << one << endl; }();*/
	
	//capture one and two by value
	[one, two]() {cout << one << "," << two << endl; }();

	//capture all loca; variables by value
	[=]() {cout << one << "; " << two << endl; }();

	//default capture all local variables by value, but capture three by reference
	[=, &three]() {three = 7; cout << one << "; " << two << endl; }();
	cout << three << endl;

	//default capture all local variables  by reference
	[&]() {three = 7; two = 8; cout << one << "; " << two << endl; }();
	cout << three << endl;
	
	cout << endl;
	//default capture all local variables  by reference,but two and three by value
	[&, two, three]() {one = 100; cout << one << "; " << two << endl; }();
	cout << three << endl;
	cout << two << endl;



	return 0;
}