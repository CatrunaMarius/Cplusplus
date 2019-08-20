#include <iostream>
#include <string>
using namespace std;

class test {
	int id{ 3 };
	string name{ "Mike" };
public:
	test() = default;
	
	test(const test&other) = default;
	test &operator=(const test&other) = default;

	test(int id):id(id){}

	void print() {
		cout << id<<": " << name << endl;
	}
};


int main() {

	test test1;

	test1.print();

	test test2(77);
	test2.print();

	////won`t work --we deleted them!
	//test test3 = test2;
	//test3 = test1;



	return 0;
}