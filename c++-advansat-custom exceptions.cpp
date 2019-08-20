#include <iostream>
#include <string>
using namespace std;



class MyException :public exception {
public:
	virtual const char* what() const throw() {
		return "Something bad happened";
	}
};

class test {
public:
	//void goseWorng() {
	void goseWorng() throw(bad_alloc) {
		throw MyException();
	}
};




int main() {

	test test;
	try {
		test.goseWorng();
	}
	catch (MyException &e) {
		cout << e.what() << endl;
	}


	return 0;
}