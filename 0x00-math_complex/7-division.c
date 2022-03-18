#include "holberton.h"

/**
 * division - Function that returns the division
 *
 * @c1: complex 1
 * @c2: complex 2
 * @c3: pointer to the new complex
 * Return: divition of complex
 *
 */

void division(complex c1, complex c2, complex *c3)
{
	c3->re = ((c1.re) * (c2.re)) + ((c1.im) * (c2.im));
	c3->re = c3->re / ((c2.re * c2.re) + (c2.im * c2.im));

	c3->im = (((c1.im) * (c2.re)) - ((c1.re) * (c2.im)));
	c3->im = c3->im / ((c2.re * c2.re) + (c2.im * c2.im));
}
