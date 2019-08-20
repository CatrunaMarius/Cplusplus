#include <iostream>
#include <string>
#include<vector>
using namespace std;

class test {
public:
	test(initializer_list<string> texts) {
		for (auto value : texts) {
			cout << value << endl;
		}
	}

	void print(initializer_list<string> texts) {
		for (auto value : texts) {
			cout << value << endl;
		}
	}
};





int main() {
	vector<int> numbers{ 1,3,4,6 };
	cout << numbers[2] << endl;

	test test1{ "apple","orange","banana" };

	test1.print({ "one","two","three","four" });

	return 0;
}