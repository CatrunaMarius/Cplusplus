#include "bitmap.h"
#include "bitmapfileheader.h"
#include"bitmapinfoheader.h"
#include <iostream>
#include<fstream>

using namespace std;

bitmap::bitmap(int width, int height):m_width(width),m_height(height), m_ppixels(new uint8_t[width*height*3])
{
}

bool bitmap::write(string filename) {
	
	bitmapfileheader  fileheader;
	bitmapinfoheader infoheader;
	
	fileheader.filesize = sizeof(bitmapfileheader) + sizeof(bitmapinfoheader) + m_width * m_height * 3;
	fileheader.dataoffset= sizeof(bitmapfileheader) + sizeof(bitmapinfoheader);
	
	
	infoheader.width = m_width;
	fileheader.height = m_height;
	
	ofstream file;
	file.open(filename, ios::out | ios::binary);
	
	if (!file) {
		return false
	}
	file.write((char *)&fileheader, sizeof(fileheader));
	file.write((char *)&infoheader, sizeof(fileheader));
	file.write((char *)m_ppixels.get(), m_width*m_height*3);
	
	file.close();
	
	if (!file) {
		return false
	}
	return false;
}

void bitmap::setpixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue){

	uint8_t *ppixel = m_ppixels.get();
	ppixel += (y * 3)*m_width + (x * 3);

	ppixel[0] = blue ;
	ppixel[1] = green;
	ppixel[2] = red;


}

bitmap::~bitmap()
{
}
