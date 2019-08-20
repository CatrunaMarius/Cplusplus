#include <iostream>
#include <string>
#include<fstream>
using namespace std;

int main() {

	//ofstream outfile;

	//outfile.open("text1.text");

	
	////creare fisier text
	//if (outfile.is_open()){}
	//else {
	//	cout << "could not create file: " << endl;
	//}

	fstream outfile;

	string outputfilename = "test-doc.doc";
	
	/*outfile.open(outputfilename);*/
	outfile.open(outputfilename, ios::out);
	
	
	//creaza fisier text si scrie in interiorul fisierului
	if (outfile.is_open()) {
		outfile << "hello there"<<endl;
		outfile << 123;
		outfile.close();
	
	
	}
	else {
		cout << "could not create file: " <<outputfilename<< endl;
	}

	return 0;
}