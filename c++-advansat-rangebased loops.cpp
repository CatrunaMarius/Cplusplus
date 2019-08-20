#include <iostream>
#include <string>
#include<vector>
using namespace std;
//enhanced for loop
int main() {
	/*char text[3] ={ "one", "two","three" }*/
	auto texts = { "one", "two","three" };
	for (auto text : texts) {
		cout << text << endl;
	}

	vector<int> numbers;
	numbers.push_back(5);
	numbers.push_back(7);
	numbers.push_back(9);
	numbers.push_back(11);

	for (auto number : numbers) {
		cout << number << endl;
	}

	string hello = "Hello";
	for (auto c : hello) {
		cout << c << endl;//flush;
	}

	//for(vector<int>iterator)

	return 0;
}