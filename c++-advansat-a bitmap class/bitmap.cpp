#include "bitmap.h"



bitmap::bitmap(int width, int height):m_width(width),m_height(height) 
{
}

bool bitmap::write(string filename) {
	return false;
}

void bitmap::setpixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue){}

bitmap::~bitmap()
{
}
