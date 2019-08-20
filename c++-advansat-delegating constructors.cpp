#include <iostream>
#include <string>
using namespace std;

class parent {
	/*int dog;*/
	int dog{ 5 };

	/*string text;*/

	string text{ "hello" };

public:
	/*parent() {*/
		parent() :parent("hello") {
		/*dog = 5;*/
		cout << "No parameter parent constructor" <<  endl;

	}
	parent(string text) {
		/*dog = 5;
		this->text = text;*/
		cout << "string parent constructor" << endl;
	}
};

class child :public parent {
public:
	/*child() {}*/
	/*child():parent("hello"){}*/
	child() = default;

};

int main() {

	parent parant1("Hello");
	child child1;




	return 0;
}