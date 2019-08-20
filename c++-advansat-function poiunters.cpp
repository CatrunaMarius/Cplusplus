#include <iostream>
#include <string>
using namespace std;

void test(int value) {
	cout << "hello: "<<value << endl;
}

int main() {

	test(7);

	void(*ptest)(int)=test;

	/*ptest = &test;*/

	/*(*ptest)();*/
	ptest(8);




	return 0;
}