#ifndef CORE_H
#define CORE_H

#include "precision.h"

namespace gbp 
{
	/** 
	 * Vector 3D Class
	 * Has three main components x, y and z for 3 dimensions.
	 */
	class Vector3D 
	{
	public:
		// Default constructor
		Vector3D() : x(0.0), y(0.0), z(0.0) {}
		// Explicit constructor
		Vector3D(const real _x, const real _y, const real _z) : x(_x), y(_y), z(_z) {}

		/**
		 * Invert this vector
		 */
		void Invert()
		{
			x = -z;
			y = -y;
			z = -z;
		}

		/**
		 * Calculate Magnitude of this vector and return
		 * @return = real magnitude value
		 */
		real Magnitude()
		{
			return real_sqrt(x * x + y * y + z * z);
		}

		/**
		* Calculate Magnitude Square of this vector and return
		* Used for most of the 
		* @return = real magnitude square value
		*/
		real MagnitudeSquare()
		{
			return (x * x + y * y + z * z);
		}

	public:
		real x; // x component of 3d vector
		real y; // y component of 3d vector
		real z; // z component of 3d vector
	private:
		real padding; // padding for four word alignment (in memory)
	};

}

#endif // CORE_H