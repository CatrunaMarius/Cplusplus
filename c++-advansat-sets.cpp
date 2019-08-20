#include <iostream>
#include <string>
#include <set>
using namespace std;




class test {
	int id;
	string name;

public:
	
	test() :id(0), name(""){}
	
	test(int id, string name) :id(id), name(name) {}
	
	
	
	void print() {
		cout << id << ": " << name << endl;
	
	}

	bool operator<(const test &other)const {
		return name < other.name;
	}


};






int main() {

	set<int> numbers;

	numbers.insert(50);
	numbers.insert(10);
	numbers.insert(30);
	numbers.insert(30);
	numbers.insert(20);

	//auto =set<int>::iterator
	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}
	/*set<int>::iterator itFind = numbers.find(30);=auto itFind = numbers.find(30);*/
	auto itFind = numbers.find(30);
	if (itFind != numbers.end()) {
		cout << "Found: " << *itFind << endl;
	}
	if (numbers.count(30)) {
		cout << "Number found" << endl;
	}


	set<test> tests;
	tests.insert(test(10, "mike"));
	tests.insert(test(30, "joe"));
	tests.insert(test(333, "mike"));
	tests.insert(test(20, "sue"));

	for (set<test>::iterator it = tests.begin(); it != tests.end(); it++) {
		it->print();
	}


	return 0;
}