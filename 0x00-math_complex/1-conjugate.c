#include "holberton.h"

/**
 * conjugate - Function that returns the conjugate complex number
 *
 * @c: complex
 *
 * Return: complex
 *
 */

complex conjugate(complex c)
{

	c.im = -1 * (c.im);

	return (c);
}
