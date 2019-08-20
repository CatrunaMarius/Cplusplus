#include "Swarm.h"


namespace marius{
Swarm::Swarm()
{
	m_pParticle = new Particle[NPARTICLES];
}


Swarm::~Swarm()
{
	delete[] m_pParticle;

}
void Swarm::update() {
	for (int i = 0; i < Swarm::NPARTICLES; i++) {
		m_pParticle[i].update();
	}
}





}