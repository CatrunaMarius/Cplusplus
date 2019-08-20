#include <iostream>
#include <SDL.h>
#include "Screen.h"
#include <math.h>
#include <time.h>
#include<stdlib.h>
#include "Swarm.h"
using namespace std;
using namespace marius;

int main(int argc, char * argv[])
{
	srand(time(NULL));
	
	Screen screen;
	
	if (screen.init() == false) {
		cout << "error initialising SDL" << endl;
		
	}

	Swarm swarm;
	while (true) {
		int elapsed = SDL_GetTicks();

		screen.clear();
		swarm.update();
		
		unsigned char green = (unsigned char)((1 + sin(elapsed*0.0001)) * 128);
		unsigned char red = (unsigned char)((1 + sin(elapsed*0.0002)) * 128);
		unsigned char blue = (unsigned char)((1 + cos(elapsed*0.0003)) * 128);
		
		
		const Particle *const pParticle = swarm.getParticles();
		
		for (int i = 0; i< Swarm::NPARTICLES; i++) {
			Particle particle = pParticle[i];
			
			int x = (particle.m_x + 1)*Screen::SCREEN_WIDTH / 2;
			int y = (particle.m_y + 1)*Screen::SCREEN_HEIGHT / 2;

			screen.setPixel(x, y, red, green, blue);
		}
			screen.update();

			/**

			for (int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
				for (int x = 0; x < Screen::SCREEN_WIDTH; x++) {
					screen.setPixel(x, y, red, green, blue);
				}
			}
			screen.setPixel(960, 540, 255, 255, 255);
			screen.update();

			if (screen.processEvent() == false) {
				break;
			}

		}
		*/if (screen.processEvent() == false) {
		break;}
	
	}	

	
	
	screen.close();


	return 0;
}