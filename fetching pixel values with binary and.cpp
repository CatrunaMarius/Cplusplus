#include <iostream>
using namespace std;

int main() {
	int color = 0x123456;

	//int red = (color & 0xff0000)>>16;
	//int green= (color & 0x00ff00) >> 8;
	//int blue = (color & 0x0000ff);

	//color :10001011110111101111011
	//mask:  11111111000000000000000
	//result:10001011000000000000000


	unsigned char red = (color & 0xFF0000) >> 16;
	unsigned char green = (color & 0x00FF00) >> 8;
	unsigned char blue = (color & 0x0000ff) ;

cout << hex << (int)red << endl;
	unsigned char redAgain = color  >> 16;
	//cout << hex << blue << endl;

	
	cout << hex << (int)redAgain << endl;
}