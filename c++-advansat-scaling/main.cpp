#include <iostream>
#include <string>
#include"bitmap.h"

using namespace std;

int main() {


	int const width = 800;
	int const height = 600;

	bitmap bitmap1(width, height);
	/*bitmap.setpixel(width / 2, height / 2, 255, 255, 255);*/

	bitmap.weite("test.bmp");

	double min =999999;
	double max =-999999;


	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			//bitmap.setpixel(x, y, 255, 0, 0);
			double xfractal = (x-width/2)*2.0/width;
			double yfractal = (y-height/2)*2.0/height;

			if (xfractal < min)min = xfractal;
			if (xfractal > max)max = xfractal;
		}
	}

	cout << min<<";"<<max << endl;
	cout << "finished" << endl;




	return 0;
}