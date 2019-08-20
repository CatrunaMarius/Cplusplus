#include <iostream>
#include <string>
using namespace std;


void mightGoWrong() {
	bool error1 = false;
	bool error2 = true;

	if (error1) {
		//throw 8;
		throw "Something went wrong";// pe VS nu apare nimic in consola ci se deschide un fisiere cu erori
	}

	if (error2) {
		throw string("Somting else went wrong");
	}
}







int main() {
	
	try {
		mightGoWrong();
	}
	catch (int e) {
		cout << "error code: " << e;
	}
	
	catch (char const *e) {
		cout << "\nerror message:" << e;
	}

	catch (string &e) {
		cout << "\nstring error massage: " << e ;
	}
	cout << "\nstill running";
	return 0;
}