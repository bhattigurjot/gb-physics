#ifndef PRECISION_H
#define PRECISION_H

#include <math.h>
#include <float.h>

namespace gbp
{
	/**
	 * For precision control
	 * single precision - float
	 * double precision - double
	 */
	typedef float real;
	
	/**
     * Defines REAL_MAx as maximum value for float
	 */
	#define REAL_MAX FLT_MAX;

	/**
	 * Define alias for functions
	 */
	#define real_sqrt sqrtf
	#define real_pow powf
}

#endif // PRECISION_H