#pragma once

#include "Particle.h"

namespace marius{
class Swarm
{public:
	const static int NPARTICLES = 5000;

private:
	Particle * m_pParticle;
	int lastTime;

public:
	Swarm();
	virtual~Swarm();
	void update(int elapsed);
	
	const Particle *const getParticles() { return m_pParticle; };
};
}
