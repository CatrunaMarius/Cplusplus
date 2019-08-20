#include <iostream>
#include <string>
using namespace std;

class parant {
private:
	int one;
public:
	//constructor
	parant():one(0){}

	//copy constructor
	parant(const parant &other) :one(0) {
		one = other.one;
		cout << "copy parants" << endl;
	}
	
	virtual void print() {
		cout << "parant" << endl;
	}

	//distroctor
	virtual ~parant(){}
};


class child : public parant {
private:
	int two;
public:
	
	child():two(0){}
	
	void print() {
		cout << "child" << endl;
	}
};

int main() {

	child c1;
	parant &p1 = c1;
	p1.print();

	parant p2 = child();
	p2.print();


	return 0;
}