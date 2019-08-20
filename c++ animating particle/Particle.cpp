#include "Particle.h"


namespace marius {
	Particle::Particle()
	{
		m_x = ((2.0*rand()) / RAND_MAX) - 1;
		m_y = ((2.0*rand()) / RAND_MAX) - 1;



		 m_xspeed = 0.01* (((2.0*rand()) / RAND_MAX)-1);
		 m_yspeed = 0.01*(((2.0*rand()) / RAND_MAX)-1);
	
	
	
	
	}


	Particle::~Particle()
	{
	}

	void Particle::update() {
		//const double speed = 0.01;

		//const double xspeed =0.01* (2.0*rand()) / RAND_MAX;
		//const double yspeed = 0.1*(2.0*rand()) / RAND_MAX;

		//din coltul de sus din stanga catre coltul din dreapta jos
		//m_x += speed;//doar cu asta -> din stnaga spre dreapta 
		//m_y += speed;//doar cu asta->de sus in jos 

		m_x += m_xspeed;
		m_y += m_yspeed;
		if (m_x < +-1.0 || m_x >= 1.0) {
			m_xspeed = -m_yspeed;
		}

		if (m_y <= -1.0 || m_y >= 1.0) {
			m_yspeed = -m_yspeed;
		}

	}
	
}