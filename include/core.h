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
		real Magnitude() const
		{
			return real_sqrt(x * x + y * y + z * z);
		}

		/**
		* Calculate Magnitude Square of this vector and return
		* Used for most of the calculations 
		* @return = real magnitude square value
		*/
		real MagnitudeSquare() const
		{
			return (x * x + y * y + z * z);
		}

		/**
		* Normalize this vector if it is non-zero vector
		*/
		Vector3D Normalize()
		{
			real m = Magnitude();
			if (m > 0) // ensure that it has magnitude
			{
				(*this) *= static_cast<real>(1.0) / m;
			}
		}

		/**
		* Multiply all components of this vector by scalar value
		*/
		void operator *= (real scalar)
		{
			x *= scalar;
			y *= scalar;
			z *= scalar;
		}

		/**
		* Multiply all components of this vector by scalar value
		* and return a new vector
		* @return = new Vector3D object
		*/
		Vector3D operator * (real scalar) const
		{
			return Vector3D(x * scalar, y * scalar, z * scalar);
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