#include <iostream>
#include <string>
using namespace std;

void goseWrong() {
	bool error1detected = false;
	bool error2detected = true;
	
	if (error1detected) {
		throw bad_alloc();

	}

	if (error2detected) {
		throw exception();
	}
}



int main() {

	try {
		goseWrong();
	}
	catch (exception &e) {
		//cout << e.what() << endl;
		cout << "catching exception: " << e.what() << endl;
	}
	catch (bad_alloc &e) {
		//cout << e.what() << endl;
		cout <<"Catching bad_alloc: "<< e.what() << endl;
	}



	return 0;
}