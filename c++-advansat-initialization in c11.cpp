#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	int value[5];
	cout << value << endl;

	string text{ "hello" };
	cout << text << endl;

	int numbers[]{ 1,2,4 };
	cout << numbers[1] << endl;

	int *pInts = new int[3]{ 1,2,3 };
	cout << pInts[1] << endl;
	delete pInts;


	int value1{};
	cout << value1 << endl;

	/*int *pSomething{&value};
	cout << *pSomething << endl;*//* nu functioneaza*/

	int *pSomething{};//eguivalent to int *pSomthing = nullpar;
	cout << pSomething << endl;

	int numbers1[5]{};
	cout << numbers1[1] << endl;

	struct {
		int value;
		string text;
	} s1{ 5,"hi" };

	cout << s1.text << endl;

	vector<string> strings{ "one","two","three" };

	cout << strings[2] << endl;

	
	return 0;
}