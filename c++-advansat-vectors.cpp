#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main() {

	/*vector<string> strings(5);*/
	vector<string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");



	//strings[3] = "dog";
	/*cout << strings[3] << endl;*/
	/*cout << strings[1] << endl;
	cout << strings.size() << endl;*/

	for (int i = 0; i < strings.size(); i++) {
		cout << strings[i] << endl;
	}


	

	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
		cout << *it << endl;
	}
	
	vector<string>::iterator it = strings.begin();
	
	it+=2;
	
	cout << *it << endl;

	return 0;
}