#include <iostream>
#include <string>
using namespace std;


auto test() ->int{
	return 100;
}

template<class T, class S>
auto test(T value, S value1)->decltype(value+value1) { 
	return value+value1;
}

int get() {
	return 999;
}
auto test2()->decltype(get()) {
	return get();
}
int main() {

	auto value = 7;
	auto text = "hello";

	cout << value << endl;
	cout << text << endl;
	cout << test() << endl;
	//cout << test("hello there") << endl;
	cout << test(5, 6) << endl;

	cout << test2() << endl;


	return 0;
}