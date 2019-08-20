#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class test {
private:
	static const int size = 100;
	int *_pbuffer{ nullptr };
public:
	test() {
		//cout << "constructor" << endl;
		_pbuffer = new int[size] {};

	}

	test(int i) {
		//cout << "parameterized constructor" << endl;
		_pbuffer = new int[size] {};

		for (int i = 0; i < size; i++) {
			_pbuffer[i] = 7 * i;
		}
	}

	test(const test &other) {
		//cout << "copy constructor" << endl;

		_pbuffer = new int [size] {};

		memcpy(_pbuffer, other._pbuffer, size * sizeof(int));

	}
	test(test&&other) {
		cout << "move constructor " << endl;
		_pbuffer = other._pbuffer;
		other._pbuffer = nullptr;
	}
	test &operator=(const test&other) {
		//cout << "assignment" << endl;

		_pbuffer = new int [size] {};

		memcpy(_pbuffer, other._pbuffer, size * sizeof(int));


		return *this;
	}
	~test() {
		//cout << "destructor" << endl;

		delete[]_pbuffer;
	}
	friend ostream &operator<<(ostream &out, const test &test);
};

ostream &operator<<(ostream &out, const test &test) {
	out << "hello from test";
	return out;
}

test gettest() {
	return test();
}

void check(const test &value) {
	cout << "lvalue function " << endl;
}

void check(test &&value) {
	cout << "rvalue function " << endl;
}
int main() {



	vector<test> vec;
	vec.push_back(test());






	return 0;
}