#include <iostream>
#include <string>
using namespace std;

class test {
public:
	test() {
		cout << "create" << endl;
	}
	void greet() {
		cout << "hello" << endl;
	}

	~test() {
		cout << "destroyed" << endl;
	}
};


int main() {

	/*shared_ptr<test> ptest1(new test());*/

	/*shared_ptr<test> ptest1 = make_shared<test>();
	shared_ptr<test> ptest2 = ptest1; */

	shared_ptr<test> ptest2(nullptr);

	{shared_ptr<test> ptest1 = make_shared<test>();
	ptest2 = ptest1;
}

	cout << "finished" << endl;


	return 0;
}