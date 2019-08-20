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
	sister siter1;

	parent *ppb = &brother1;
	
	/*sister *pbb = dynamic_cast<sister *>(ppb);*/
	/*sister *pbb = static_cast<sister *>(ppb);*/
	sister *pbb = reinterpret_cast<sister *>(ppb);


	if (pbb == nullptr) {
		cout << "invalid cast" << endl;
	}
	else {
		cout << pbb << endl;
	}

	


	

	return 0;
}