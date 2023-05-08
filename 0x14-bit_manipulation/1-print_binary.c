#include "main.h"
#include <stdio.h>

/**
 * print_binary - print a number in binary form
 * @n: decimal number input
 */

void print_binary(unsigned long int n)
{
	int i, tally = 0;
	unsigned long int movingPart;

	for (i = 63; i >= 0; i--)
	{
		movingPart = n >> i;

		if (movingPart & 1)
		{
			_putchar('1');
			tally++;
		}
		else if (tally)
			_putchar('0');
	}
	if (!tally)
		_putchar('0');
}
