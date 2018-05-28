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
		* @param = scalar value to scale this vector
		*/
		void operator *= (const real scalar)
		{
			x *= scalar;
			y *= scalar;
			z *= scalar;
		}

		/**
		* Multiply all components of this vector by scalar value
		* and return a new vector
		* @param = Vector3D reference
		* @return = new Vector3D object
		*/
		Vector3D operator * (const real scalar) const
		{
			return Vector3D(x * scalar, y * scalar, z * scalar);
		}

		/**
		* Add a vector to this vector, components wise
		* @param = Vector3D reference
		*/
		void operator += (const Vector3D& _vec)
		{
			x += _vec.x;
			y += _vec.y;
			z += _vec.z;
		}

		/**
		* Add a vector to this vector and return new vector
		* @param = Vector3D reference
		* @return = new Vector3D object
		*/
		Vector3D operator + (const Vector3D& _vec) const
		{
			return Vector3D(x + _vec.x, y + _vec.y, z + _vec.z);
		}

		/**
		* Subtract a vector from this vector, components wise
		* @param = Vector3D reference
		*/
		void operator -= (const Vector3D& _vec)
		{
			x -= _vec.x;
			y -= _vec.y;
			z -= _vec.z;
		}

		/**
		* Subtract a vector from this vector and return new vector
		* @param = Vector3D reference
		* @return = new Vector3D object
		*/
		Vector3D operator - (const Vector3D& _vec) const
		{
			return Vector3D(x - _vec.x, y - _vec.y, z - _vec.z);
		}

		/**
		* Add a vector to this vector after scaling 
		* @param = Vector3D reference
		* @param = scale value for scaling the vector in the paramter
		*/
		void AddScaledVector(const Vector3D& _vec, real scale)
		{
			x += _vec.x * scale;
			y += _vec.y * scale;
			z += _vec.z * scale;
		}

		/**
		* Set the magnitude of this vector
		* @param = new magnitude value for this vector
		*/
		void SetMagnitude(const real magnitude)
		{
			Normalize();
			(*this) *= magnitude;
		}

		/**
		* Component wise product of this vector and the given vector
		* @param = Vector3D reference
		*/
		void ComponentProductUpdate(const Vector3D& _vec)
		{
			x *= _vec.x;
			y *= _vec.y;
			z *= _vec.z;
		}

		/**
		* Calculate component wise product of this vector and the given vector and return it
		* @param = Vector3D reference
		* @return = new Vector3D object
		*/
		Vector3D ComponentProduct(const Vector3D& _vec) const
		{
			return Vector3D(x * _vec.x,	y * _vec.y,	z * _vec.z);
		}

		/**
		* Scaler/Dot Product of this vector and the given vector
		* @param = Vector3D reference
		* @return = real scalar value
		*/
		real ScalerProduct(const Vector3D& _vec) const
		{
			return (x * _vec.x + y * _vec.y + z * _vec.z);
		}

		/**
		* Scaler/Dot Product of this vector and the given vector
		* @param = Vector3D reference
		* @return = real scalar value
		*/
		real operator * (const Vector3D& _vec) const
		{
			return (x * _vec.x + y * _vec.y + z * _vec.z);
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