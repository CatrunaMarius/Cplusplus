#include "Particle.h"


namespace marius {
	Particle::Particle() :m_x(0), m_y(0)
	{
		init();
	}


		void Particle::init(){
        m_x = 0;
		m_y = 0;


		 m_direction = (2*M_PI*rand()) / RAND_MAX;
		 m_speed = (0.04*rand()) / RAND_MAX;

		 m_speed *= m_speed;
	
	
	
	
	}


	Particle::~Particle()
	{
	}

	void Particle::update(int interval) {
		//const double speed = 0.01;

		//const double xspeed =0.01* (2.0*rand()) / RAND_MAX;
		//const double yspeed = 0.1*(2.0*rand()) / RAND_MAX;

		//din coltul de sus din stanga catre coltul din dreapta jos
		//m_x += speed;//doar cu asta -> din stnaga spre dreapta 
		//m_y += speed;//doar cu asta->de sus in jos 

		m_direction += interval * 0.0004;

		double xspeed = m_speed * cos(m_direction);
		double yspeed = m_speed * sin(m_direction);
		
		m_x += xspeed *interval;
		m_y += yspeed *interval;
	
		if (m_x < -1 || m_x>1 || m_y < -1 || m_y>1) {
			init();
		}
		if (rand() < RAND_MAX / 100) {
			init();
		}
	}
	
}