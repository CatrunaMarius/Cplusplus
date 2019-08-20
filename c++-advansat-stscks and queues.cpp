#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

class test{
	string name;


public:
	test(string name):name(name){}
	~test(){
		//cout << "object destroyed" << endl;
	
	}

	void print() {
		cout << name << endl;
	}
};



int main() {

	//LIFO
	stack<test> teststack;
	teststack.push(test("mike"));
	teststack.push(test("joe"));
	teststack.push(test("sue"));



	/*this is invalid code!Object is destoyed
	test test1 = teststack.top();
	teststack.pop();
	test1.print();//reference refers to destroyed objects
	
	teststack.pop();
	test test2 = teststack.top();
	test2.print();*/

	while (teststack.size() > 0) {
		test &test = teststack.top();
		test.print();
		teststack.pop();
	}
	cout << endl;


	//FIFO
	queue<test> testqueue;
	testqueue.push(test("mike"));
	testqueue.push(test("joe"));
	testqueue.push(test("sue"));

	while (testqueue.size() > 0) {
		test &test = testqueue.front();
		test.print();
		testqueue.pop();
	}

	return 0;
}