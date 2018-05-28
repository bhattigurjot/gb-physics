#ifndef CORE_H
#define CORE_H

#include "precision.h"

namespace gbp 
{
	// Vector 3D Class
	class Vector3D 
	{
	public:
		// Default constructor
		Vector3D(): x(0.0), y(0.0), z(0.0) {}
		// Explicit constructor
		Vector3D(real _x, real _y, real _z) : x(_x), y(_y), z(_z) {}
	private:
		real x; // x component of 3d vector
		real y; // y component of 3d vector
		real z; // z component of 3d vector
	};

}

#endif // CORE_H