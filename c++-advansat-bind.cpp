#include <iostream>
#include <string>
#include<functional>
using namespace std;
using namespace placeholders;

class test {
public:
	int add(int a, int b, int c) {
		cout << a << ", " << b << ", " << c << endl;
		return a + b + c;
	}
};
//int add(int a, int b, int c) {
//	cout << a << ", " << b << ", " << c << endl;
//	return a + b + c;
//}
//void run(function<int(int, int)> func) {
//	
//    func(7, 3);
//}

int run(function<int(int, int)> func) {

	return func(7, 3);
}
int main() {

	test test1;


	//cout << add(1, 2, 3) << endl;

	/*auto calculator = bind(add, 3, 4, 5);

	cout << calculator() << endl;*/

	/*auto calculator = bind(add,_1,_2,_3  );

	cout << calculator(10, 20, 30) << endl;*/

	auto calculator = bind(&test::add,test1, _2, 100, _1);

	/*cout << calculator(10, 20) << endl;*/

	//run(calculator);
	cout << run(calculator) << endl;



	return 0;
}