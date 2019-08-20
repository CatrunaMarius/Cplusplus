#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//binary files

#pragma pack(push,1)
struct Person {
	char name[50];
	int age;
	double height;
};

#pragma pack(pop)


int main() {
	
	Person someone = { "marius",220, 0.8 };
	
	string fileName = "test.bin";
	

	////Write binary file////////
	ofstream outputfile;

	outputfile.open(fileName, ios::binary);

	if (outputfile.is_open()) {
		
		//outputfile.write((char*)&someone, sizeof(Person));
		outputfile.write(reinterpret_cast<char*>(&someone), sizeof(Person));
		
		outputfile.close();
	}
	else {
		cout << "could not create file" + fileName;
	}



	////Read bynary file//////
	
	Person someoneElse = {};
	
	ifstream inputfile;
	
	inputfile.open(fileName, ios::binary);

	if (inputfile.is_open()) {
		inputfile.read(reinterpret_cast<char *>(&someone), sizeof(Person));

		inputfile.close();
	}
	else {
		cout << "Could not create file " + fileName;
	}
	cout << someoneElse.name << "," << someoneElse.age << "," << someoneElse.height << endl;

	return 0;
}