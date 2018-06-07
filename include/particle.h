#ifndef PARTICLE_H
#define PARTICLE_H

#include "core.h"

namespace gbp {

	/**
	 * Simplest object in the engine
	 */
	class Particle
	{
	protected:
		// Linear position of particle in space
		Vector3D position;
		// Linear velocity of particle
		Vector3D velocity;
		// Acceleration of particle
		Vector3D acceleration;

		// Amount of damping allowed to linear motion.
		// Used for avoiding numerical instability due to
		// high calculations
		real damping;

		// Inverse Mass
		// This avoid the issue of infinite mass of any object.
		// Infinite mass = Zero inverse Mass
		real inverseMass;

	public:
		/**
		 * Integrate particle forward in time by given amount.
		 */
		void Integrate(real _duration);

		void SetMass(const real _mass);

		real GetMass() const;

		void SetInverseMass(const real _inverseMass);

		real GetInverseMass() const;

		void SetDamping(const real _damping);

		real GetDamping() const;

		void SetPosition(const Vector3D& _position);

		void SetPosition(const real _x, const real _y, const real _z);

		Vector3D GetPosition() const;

		void SetVelocity(const Vector3D& _velocity);

		void SetVelocity(const real _x, const real _y, const real _z);

		Vector3D GetVelocity() const;

		void SetAcceleration(const Vector3D& _acceleration);

		void SetAcceleration(const real _x, const real _y, const real _z);

		Vector3D GetAcceleration() const;
	};

}

#endif // PARTICLE_H