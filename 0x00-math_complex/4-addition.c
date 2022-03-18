#include "holberton.h"

/**
 * addition - Function that returns the addition
 *
 * @c1: complex 1
 * @c2: complex 2
 * @c3: pointer to the new complex
 * Return: sum of complex
 *
 */

void addition(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re + c2.re);
	c3->im = (c1.im + c2.im);
}
