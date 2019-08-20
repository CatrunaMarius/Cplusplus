#include <iostream>
#include <string>
#include<vector>
#include<map>
using namespace std;

int main() {
	map<string, vector<int>> scores;

	scores["mike"].push_back(10);
	scores["mike"].push_back(20);
	scores["viki"].push_back(15);

	for (auto it = scores.begin(); it != scores.end(); it++) {
		string name = it->first;
		vector<int> scoreList = it->second;

		cout << name << ": " << flush;

		for (int i = 0; i < scoreList.size(); i++) {
			cout << scoreList[i] << " " << flush;
		}
		cout << endl;
	}




	return 0;
}