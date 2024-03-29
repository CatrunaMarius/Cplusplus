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

		
		swarm.update(elapsed);
		
		unsigned char green = (unsigned char)((1 + sin(elapsed*0.0001)) * 128);
		unsigned char red = (unsigned char)((1 + sin(elapsed*0.0002)) * 128);
		unsigned char blue = (unsigned char)((1 + cos(elapsed*0.0003)) * 128);

		/*int green = ((1 + sin(elapsed*0.0001)) * 128);
		int red = ((1 + sin(elapsed*0.0002)) * 128);
		int blue = ((1 + cos(elapsed*0.0003)) * 128); */
		
		
		const Particle *const pParticle = swarm.getParticles();
		
		for (int i = 0; i< Swarm::NPARTICLES; i++) {
			Particle particle = pParticle[i];
			
			int x = (particle.m_x + 1)*Screen::SCREEN_WIDTH / 2;
			int y = particle.m_y *Screen::SCREEN_WIDTH / 2 + Screen::SCREEN_HEIGHT / 2;

			screen.setPixel(x, y, red, green, blue);
		}


		screen.boxBlur();
		screen.update();

		if (screen.processEvent() == false) {
		break;}
	
	}	

	
	
	screen.close();


	return 0;
}