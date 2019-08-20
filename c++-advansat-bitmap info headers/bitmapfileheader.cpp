#pragma once
#include<cstdint>
using namespace std;
#pragma
struct bitmapfileheader {
	char header[2]{ 'B','M' };
	int32_t filesize;
	int32_t reserved{ 0 };
	int32_t dataoffset;
};