#include <iostream>
#include <string>
#include <vector>
using namespace std;

class test {
public:
	//constructor
	test() {
		cout << "constructor" << endl;
	}
	//parametri constructorului
	test(int i) {
		cout << "parameterized constructor" << endl;
	}
	//copy constructor
	test(const test&other) {
		cout << "copy constructor" << endl;
	}

	test &operator=(const test &other) {
		cout << "assignment" << endl;
		return *this;
	}

	//destroctor
	~test() {
		cout << "destructor" << endl;
	}
	friend ostream &operator<<(ostream &out, const test &test);
};

ostream &operator<<(ostream &out, const test &test) {
	out << "hello from test";
	return out;
}

test getTest() {
	return test();
}

int main() {

	test test1 = getTest();
	cout << test1 << endl;

	vector<test> vec;
	vec.push_back(test());



	return 0;
}