#include <iostream>
#include <string>
using namespace std;

class test {
	int id;
	string name;
public:
	test() :
		id(0), name(" "){}
	test(int id, string name): id(id),name(name){}

	void print() {
		cout << id << ": " << name << endl;
	}
	const test &operator=(const test &other) {
		id = other.id;
		name = other.name;
		return *this;

	}
	test(const test&other) {
		*this = other;
	}
	//inlocuie functia void print()
	friend ostream &operator<<(ostream &out, const test &test){
		out << test.id << ": " << test.name;
		return out;
	
	}

};

int main() {

	test test1(10, "miki");
	test test2(20, "bob");
	
	/*test1.print();*/
	

	cout << test1 <<test2<< endl;



	return 0;
}