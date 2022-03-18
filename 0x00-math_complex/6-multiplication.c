#include "holberton.h"

/**
 * multiplication - Function that returns the multiplication
 *
 * @c1: complex 1
 * @c2: complex 2
 * @c3: pointer to the new complex
 * Return: multiplication of complex
 *
 */

void multiplication(complex c1, complex c2, complex *c3)
{

	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);

}
