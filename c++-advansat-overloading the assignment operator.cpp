#include <iostream>
#include <string>
using namespace std;

class test {
private:
	int id;
	string name;

public:
	test():id(0),name(" "){}

	test(int id, string name): id(id),name(name){}

	void print() {
		cout << id << ": " << name << endl;
	}

	const test &operator=(const test &other) {
		cout << "Assignment running" << endl;

		id = other.id;
		name = other.name;

		return*this;
	}
	test(const test&other) {
		cout << "Copy constructor running" << endl;
		/*id = other.id;
		name = other.name;*/
		*this=other;
	}
};

int main() {

	test test1(10, "mike");
	cout << "Print test1 ";
	test1.print();

	test test2(20, "bob");

	test2 = test1;
	cout << "Print test2 ";
	test2.print();

	test test3;
	//test3=test2=test1;

	////test3=test2;
	test3.operator=(test2);
	cout << "Print test3 ";
	test3.print();

	cout << endl;
	//copy initialization
	test test4=test1;
	test4.print();


	return 0;
}