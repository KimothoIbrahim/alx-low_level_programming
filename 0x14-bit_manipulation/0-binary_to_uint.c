#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary to decimal
 * @b: pointer to string with binary representation
 *
 * Return: converted decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimalNumber = 0, i = 0, x = 1;
	int k;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	for (k = (i - 1); k >= 0; k--)
	{
		if (b[k] == '1')
			decimalNumber += x;
		x *= 2;
	}
	return (decimalNumber);
}
