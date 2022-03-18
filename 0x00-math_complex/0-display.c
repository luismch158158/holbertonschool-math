#include "holberton.h"

/**
 * display_complex_number - Function that displays the complex numbers
 *
 * @c: complex
 *
 */

void display_complex_number(complex c)
{
	if (c.im == 0 && c.re == 0)
	{
		printf("0");
	}
	else if (c.im == 1)
	{
		printf("%.9g + i\n", c.re);
	}
	else if (c.im == 0)
	{
		printf("%.9g\n", c.re);
	}
	else if (c.im < 0)
	{
		printf("%.9g - %.9g", c.re, -c.im);
	}
	else if (c.im == -1)
	{
		printf("%.9g - i", c.re);
	}

	else
		printf("%.9g + %.9gi\n", c.re, c.im);
}
