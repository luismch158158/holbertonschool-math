#include "holberton.h"

/**
 * modulus - Function that returns the modulus of comples
 *
 * @c: complex
 *
 * Return: modulus
 *
 */

double modulus(complex c)
{

	return (sqrt((pow(c.re, 2)) + (pow(c.im, 2))));

}
