#include <iostream>
#include <string>
#include <vector>

using namespace std;

class parent {
public:
	virtual void  speak() {
		cout << "parent" << endl;
	}
};

class brother :public parent {};

class sister :public parent {};

int main() {

	parent parent1;
	brother brother1;

	


	parent *ppb = &parent1;
	
	
	brother *pbb = dynamic_cast<brother*>(ppb);

	if (pbb == nullptr) {
		cout << "invalid cast" << endl;
	}
	else {
		cout << pbb << endl;
	}



	return 0;
}