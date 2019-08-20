#pragma once
#include<string>
using namespace std;
class bitmap
{
private:
	int m_width{0};
	int m_height{ 0 };
public:
	bitmap(int width, int height);
	void setpixel(int x, int y, uint8_t red, uint8_t green,uint8_t blue);
	bool write(string filename);
	virtual ~bitmap();
};

