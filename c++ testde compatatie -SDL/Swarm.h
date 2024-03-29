/*
 * Swarm.h
 *
 *  Created on: 06-Feb-2016
 *      Author: vivek
 */
#include "Particle.h"

#ifndef SWARM_H_
#define SWARM_H_

class Swarm {
	Particle*  m_particles;
public:
	const static int NPARTICLES = 3000;
	Swarm();
	virtual ~Swarm();
	Particle* getParticles() {
		return m_particles;
	}
	void update();
};

#endif /* SWARM_H_ */