#include <iostream>
#include <string>
using namespace std;

class test {
public:
	test() {
		cout << "created" << endl;
	}
	void greet() {
		cout<<"hello" << endl;
	}
	~test() {
		cout << "destroyed" << endl;
	}
};

class temp {
private:
	unique_ptr<test[]> ptest;

public:
	temp():ptest(new test[2]){}
};

int main() {

	/*unique_ptr<int> ptest(new int);
	*ptest = 7;
	cout << *ptest << endl;*/
    //auto=unique
	
	/*{auto_ptr<test> ptest(new test);


	ptest->greet(); }*/


	/*unique_ptr<test[]> ptest(new test[2]);


	ptest[1].greet();*/
	
	temp temp1;

	cout << "finished" << endl;

	




	return 0;
}