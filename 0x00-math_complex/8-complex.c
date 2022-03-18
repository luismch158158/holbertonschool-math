#include "holberton.h"

/**
 * complex_from_mod_arg - Function that update the real and imaginary
 * parts of a complex number given its modulus and arguments
 *
 * @m: modulus of complex
 * @arg: argument of complex
 * @c3: pointer to the new complex
 *
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{

	c3->im = sin(arg) * m;
	c3->re = cos(arg) * m;

}
