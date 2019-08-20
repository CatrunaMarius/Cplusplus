#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main() {
	vector<double> numbers(0);

	cout << "size: " << numbers.size() << endl;

	int capacity = numbers.capacity();
	cout << "Capacity: " << capacity << endl;

	for (int i = 0; i < 10000; i++) {
		if (numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << "capacity: " << capacity << endl;
		}
		numbers.push_back(i);
	}
	//numbers.clear();

	//numbers.resize(100);
	numbers.reserve(100000);
	cout << numbers[2] << endl;
	cout << "Size: " << numbers.size() << endl;
	cout << "capacity: " << numbers.capacity() << endl;

	return 0;
}