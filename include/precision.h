#ifndef PRECISION_H
#define PRECISION_H

#include <math.h>

namespace gbp
{
	/**
	 * For precision control
	 * single precision - float
	 * double precision - double
	 */
	typedef float real;

	/**
	 * Define alias for functions
	 */
	#define real_sqrt(real) sqrtf(real)
}

#endif // PRECISION_H