#include <iostream>
#include <string>
using namespace std;

struct test {
	virtual bool operator()(string &text) = 0;

	virtual ~test(){}
};

struct matchtest: public test{
	bool operator()(string &text){
	
		return text == "lion";
	}
};

void check(string text, test &test){
	if (test(text)) {
		cout << "test matches!" << endl;
	}
	else {
		cout << "no match" << endl;
	}


}

int main() {

	matchtest pred;
	string value = "lion";

	//cout << pred(value) << endl;

	matchtest m;
	check("liond", m);


	return 0;
}