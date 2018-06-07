#include <assert.h>

#include "particle.h"

using namespace gbp;

void Particle::Integrate(real _duration)
{
	// No integration because of Infinite Mass
	if (inverseMass <= 0.0) 
	{
		return;
	}

	assert(_duration > 0.0);

	// Update position based on velocity
	position.AddScaledVector(velocity, _duration);
	
	// Calculate the accelaration
	// Used because forces will be added to this acceleration
	Vector3D resultAcc = acceleration;

	// Update the velocity
	velocity.AddScaledVector(resultAcc, _duration);

	// Add drag to velocity
	velocity *= real_pow(damping, _duration);
}

void Particle::SetMass(const real _mass)
{
	assert(_mass != 0);
	inverseMass = (static_cast<real>(1) / _mass);
}
	 
real Particle::GetMass() const
{
	if (inverseMass == 0)
	{
		return REAL_MAX;
	}
	else
	{
		return (static_cast<real>(1) / inverseMass);
	}
}
	 
void Particle::SetInverseMass(const real _inverseMass)
{
	inverseMass = _inverseMass;
}
	 
real Particle::GetInverseMass() const
{
	return inverseMass;
}
	 
void Particle::SetDamping(const real _damping)
{
	damping = _damping;
}
	 
real Particle::GetDamping() const
{
	return damping;
}
	 
void Particle::SetPosition(const Vector3D& _position)
{
	position = _position;
}
	 
void Particle::SetPosition(const real _x, const real _y, const real _z)
{
	position.x = _x;
	position.y = _y;
	position.z = _z;
}

Vector3D Particle::GetPosition() const
{
	return position;
}

void Particle::SetVelocity(const Vector3D& _velocity)
{
	velocity = _velocity;
}

void Particle::SetVelocity(const real _x, const real _y, const real _z)
{
	velocity.x = _x;
	velocity.y = _y;
	velocity.z = _z;
}

Vector3D Particle::GetVelocity() const
{
	return velocity;
}

void Particle::SetAcceleration(const Vector3D& _acceleration)
{
	acceleration = _acceleration;
}

void Particle::SetAcceleration(const real _x, const real _y, const real _z)
{
	acceleration.x = _x;
	acceleration.y = _y;
	acceleration.z = _z;
}

Vector3D Particle::GetAcceleration() const
{
	return acceleration;
}