#include <iostream>
#include<iomanip>
using namespace std;

int main() {

	unsigned char alpha = 0xFF;
	unsigned char red = 0x12;
	unsigned char blue = 0x34;
	unsigned char green = 0x56;

	unsigned int color = alpha;

	//color = color << 24;
	color += alpha;
	color <<= 8;
	color += red;
	color <<= 8;
	color += green;
	color <<= 8;
	color += blue;

	//cout <<setw(8)<< hex << color << endl;
	cout << setfill('0') << setw(8) << hex << color << endl;
	return 0;

}