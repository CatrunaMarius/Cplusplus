#pragma once
#include <iostream>
#include<SDL.h>
using namespace std;
namespace marius{
	class Screen
{public:
	const int SCREEN_WIDTH = 1920;
	const int SCREEN_HEIGHT = 1080;

private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer;


public:
	Screen();
	bool init();
	bool processEvents();
	void close();
	
};
}


