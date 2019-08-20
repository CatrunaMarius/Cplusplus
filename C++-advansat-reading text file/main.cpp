#include <iostream>
#include <string>
#include<fstream>
using namespace std;

//pentru a citi este necesar ca fierul sa fin in dosarul in care este programul creat

int main() {

	string infilename = "test.txt";

	fstream infile;
	infile.open(infilename);
	
	if (infile.is_open()) {
		
		string line;
		
		//infile >> line;
		///getline(infile, line);
		while (!infile.eof()) {
			getline(infile, line);
			cout << line << endl;
		}
		
		///cout << line << endl;
		
		infile.close();
	}
	else {
		cout << "Cannot open file: " << infilename << endl;
	}



	return 0;
}