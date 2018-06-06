#ifndef PARTICLE_H
#define PARTICLE_H

#include "core.h"

namespace gbp {

	/**
	 * Simplest object in the engine
	 */
	class Particle
	{
	private:
		// Linear position of particle in space
		Vector3D position;
		// Linear velocity of particle
		Vector3D velocity;
		// Acceleration of particle
		Vector3D accelaration;

		// Amount of damping allowed to linear motion.
		// Used for avoiding numerical instability due to
		// high calculations
		real damping;

		// Inverse Mass
		// This avoid the issue of infinite mass of any object.
		// Infinite mass = Zero inverse Mass
		real inverseMass;

		/**
		 * Integrate particle forward in time by given amount.
		 */
		void Integrate(real duration);
	};

}

#endif // PARTICLE_H