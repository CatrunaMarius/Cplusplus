#include "bitmap.h"
#include "bitmapfileheader.h"
#include"bitmapinfoheader.h"


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
	
	
	
	
	
	return false;
}

void bitmap::setpixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue){}

bitmap::~bitmap()
{
}
