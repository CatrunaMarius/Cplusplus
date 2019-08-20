#include <iostream>
#include <string>
using namespace std;


//void print(int n) {
//	cout << n << endl;
//}
template<class T>//class=typename
void print(T n) {
	cout << n << endl;
}


int main() {

	/*print(5);*/
	print<string>("hello");
	print<int>(5);

	print("hi there");
	return 0;
}