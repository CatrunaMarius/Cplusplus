#pragma once
#include <string>

using namespace std;

#pragma pack (2)

struct bitmapinfoheader {
	int32_t headersize{ 40 };
	int32_t width;
	int32_t height;
	int16_t planes{ 1 };
	int16_t bitsperpixel{ 24 };
	int32_t compression{ 0 };
	int32_t datasize{ 0 };
	int32_t horizontaalresolution{ 2400 };
	int32_t verticalresolution{ 2400 };
	int32_t colors{ 0 };
	int32_t importcolors{ 0 };
};