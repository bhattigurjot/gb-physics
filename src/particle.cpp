#include <assert.h>

#include "particle.h"

using namespace gbp;

void Particle::Integrate(real duration)
{
	// No integration because of Infinite Mass
	if (inverseMass <= 0.0) 
	{
		return;
	}

	assert(duration > 0.0);

	// Update position based on velocity
	position.AddScaledVector(velocity, duration);
	
	// Calculate the accelaration
	// Used because forces will be added to this acceleration
	Vector3D resultAcc = accelaration;

	// Update the velocity
	velocity.AddScaledVector(resultAcc, duration);

	// Add drag to velocity
	velocity *= real_pow(damping, duration);
}