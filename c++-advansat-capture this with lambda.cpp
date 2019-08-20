#include <iostream>
#include <string>
using namespace std;

class test {
	int one{ 1 };
	int two{ 2 };

public:
	void run() {
		int three = { 3 };
		int four = { 4 };

		//auto plambda =[three,this, four](){
		auto plambda = [&, this]() {
			one = 111;
			cout << one << endl;
			cout << two << endl;
			cout << three << endl;
			cout << four << endl;
		};
		plambda();
	}
	
};
 
int main() {

	test test1;
	test1.run();




	return 0;
}