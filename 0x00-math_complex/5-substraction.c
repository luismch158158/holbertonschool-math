#include "holberton.h"

/**
 * substraction - Function that perform the substraction
 *
 * @c1: complex 1
 * @c2: complex 2
 * @c3: pointer to the new complex
 * Return: substraction of complex
 *
 */

void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re - c2.re);
	c3->im = (c1.im - c2.im);
}
