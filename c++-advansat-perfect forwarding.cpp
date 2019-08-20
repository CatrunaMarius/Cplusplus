#include <iostream>
#include <string>
using namespace std;

class test{};

template<typename T>
void call(T &&arg){
	//cheak(arg);//pentru lvalue
	//cheak(static_cast<T>(arg));//pentru rvalue
	cheak(forward<T>(arg));//pentru rvalue

}

void cheak(test &test1) {
	cout << "lvalue" << endl;
}
void cheak(test &&test1) {
	cout << "rvalue" << endl;
}



int main() {

	test test1;

	//auto&&t = test1;

	/*call(test());*///pentru lvalue
	/*call(test1);*///pentru lvalue

	//call(test());//pentru rvalue
	call(test1);//pentru lvalue dar cu finctia cheak(forward<T>(arg))


	return 0;
}