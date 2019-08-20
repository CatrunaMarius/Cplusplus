#pragma once
#include<string>
#include<cstdint>
using namespace std;
class bitmap
{
private:
	int m_width{0};
	int m_height{ 0 };
	unique_ptr<uint8_t[]> m_ppixels{ nullptr };
public:
	bitmap(int width, int height);
	void setpixel(int x, int y, uint8_t red, uint8_t green,uint8_t blue);
	bool write(string filename);
	virtual ~bitmap();
};

