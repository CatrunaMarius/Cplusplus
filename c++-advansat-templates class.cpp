#include <iostream>
#include <string>

using namespace std;

template<class T,class k>
class test {
private:
	T obj;//declatatie

public:
	test(T obj) {
		this->obj = obj;//initializare
	}
	void print() {
		cout << obj << endl;//
	}
};


int main() {

	test<string, int>test1("hello");
	test1.print();                 //functie



	return 0;
}