#include <iostream>
#include <string>
#include <vector>

using namespace std;

class test {
private:
	static const int size = 100;
	int *_pbuffer;
public:
	test() {
		cout << "constructor" << endl;
		_pbuffer = new int[size];
		
	}

	test(int i) {
		cout << "parameterized constructor" << endl;
		_pbuffer = new int[size] {};

		for (int i = 0; i < size; i++) {
			_pbuffer[i] = 7 * i;
		}
	}

	test(const test &other) {
		cout << "copy constructor" << endl;
		
		_pbuffer = new int [size] {};
		
		memcpy(_pbuffer, other._pbuffer, size * sizeof(int));

	}
	test &operator=(const test&other) {
		cout << "assignment" << endl;
		
		_pbuffer = new int [size] {};

		memcpy(_pbuffer, other._pbuffer, size * sizeof(int));
		
		
		return *this;
	}
	~test() {
		cout << "destructor" << endl;

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

int main() {
	test test1 = gettest();
	cout << test1 << endl;

	vector<test> vec;
	vec.push_back(test());

	//test &rtest2 = gettest();//nu functioneaza

	const test &rtest2 = gettest();

	test test2(test(1));





	return 0;
}