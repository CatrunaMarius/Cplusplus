#include <iostream>
#include <string>
#include <vector>

using namespace std;

class parent {
public:
	void  speak() {//functie trebuie sa fie publicca pentru ca nu poate fi acesa din casa pt k este considerata pirata calsei in care face parte
		cout << "parent"<<endl;
	}
};

class brother:public parent{};

class sister :public parent {};

int main() {

	parent parent1;
	brother brother1;

	//float value = 3.23;
	//
	//cout << value << endl;
	//cout <<(int) value << endl;
	//cout << static_cast<int>(value) << endl;

	//parent *pp = &brother1;
	////brother *pb = &parent1;//nu functioneaza
	//brother *pb = static_cast<brother*>(&parent1);
	//cout << pb << endl;


	parent *ppb = &brother1;
	brother *pbb = static_cast<brother*>(ppb);

	cout << pbb << endl;


	parent &&p = static_cast<parent &&>(parent1);
	p.speak();

	return 0;
}