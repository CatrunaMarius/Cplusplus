#include <iostream>
#include <string>
#include<vector>
#include<algorithm>


using namespace std;

class test {
	int id;
	string name;
	
public:
	test(int id, string name) : id(id), name(name) {}

	void print() {
		cout << id <<": "<< name << endl;
	}
	
	/*bool operator<(const test &other)const {
		return name < other.name;
	}*/


	friend bool comp(const test &a, const test &b);
};

bool comp(const test&a, const test &b) {
	return a.name < b.name;
}

int main() {

	vector<test> tests;

	
	tests.push_back(test(5, "mike"));
	tests.push_back(test(10, "sue"));
	tests.push_back(test(7, "raj"));
	tests.push_back(test(3, "viki"));

	sort(tests.begin(), tests.begin()+3,comp);

	for (int i = 0; i < tests.size(); i++) {
		tests[i].print();

	}


	return 0;
}