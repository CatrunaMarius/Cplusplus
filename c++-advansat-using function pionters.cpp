#include <iostream>
#include <string>
#include<algorithm>
#include <vector>
using namespace std;

bool match(string test) {

	return test.size() == 3;
	
	
}

int countstrings(vector<string> &text, bool(*match)(string test)) {
	int tally = 0;
	for (int i = 0; i < text.size(); i++) {
		if (match(text[i])) {
			tally++;
		}
	}
	return tally;
}



int main() {

	vector<string> text;
	text.push_back("one");
	text.push_back("two");
	text.push_back("three");
	text.push_back("two");
	text.push_back("four");
	text.push_back("two");
	text.push_back("three");

	cout << match("oned") << endl;
	cout << count_if(text.begin(), text.end(), match) << endl;
	cout << countstrings(text, match) << endl;




	return 0;
}