#include "bitmap.h"



bitmap::bitmap(int width, int height):m_width(width),m_height(height), m_ppixels(new uint8_t[width*height*3])
{
}

bool bitmap::write(string filename) {
	return false;
}

void bitmap::setpixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue){}

bitmap::~bitmap()
{
}
