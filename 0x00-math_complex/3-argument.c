#include "holberton.h"

/**
 * argument - Function that returns the argument of complex
 *
 * @c: complex
 *
 * Return: argument
 *
 */

double argument(complex c)
{
	double arg = 0;

	if (c.re != 0)
		arg = atan2(c.im, c.re);

	return (arg);
}
