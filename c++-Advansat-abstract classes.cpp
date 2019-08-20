#include <iostream>
#include <string>
using namespace std;

class animal {
public:
	virtual void speak() = 0;
	virtual void run() = 0;
};
class dog: public animal{
public:
	virtual void speak() {
		cout << "woof!" << endl;
	}
	
};

class labrador :public dog {
public:
	labrador() {
		cout << "new labrador" << endl;
	}
	virtual void run() {
		cout << "labrador running" << endl;
	}

};

void test(animal &a) {
	a.run();
}

int main() {

	/*dog dog1;
	dog1.speak();*/
	
	//labrador labs[5];
	
	labrador lab;
	lab.run();
	lab.speak();

	animal *animals[5];
	animals[0] = &lab;

	animals[0]->speak();

	test(lab);



	return 0;
}