#include <iostream>
#include <string>
using namespace std;



class CanGoWrong {
public:
	CanGoWrong() {
		char *pMemory = new char[99999999999999];
		delete[]pMemory;
	}
};






int main() {
	try {
		CanGoWrong wrong;
	}
	catch (bad_alloc &e) {
		cout << "catch exception:" << e.what() << endl;
	}

	return 0;
}