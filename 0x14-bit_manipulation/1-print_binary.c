#include "main.h"
#include <stdio.h>

/**
 * print_binary - print a number in binary form
 * @n: decimal number input
 */

void print_binary(unsigned long int n)
{
	unsigned long i;
	int j;
	char byte, bit;

	for (i = 0; i < sizeof(int); i++)
	{
		byte = ((char *)&n)[i];
		for(j = 8; j >= 0; j--)
		{
			bit = (byte >> j) & 1;
			_putchar(bit + 48);
		}
		_putchar(' ');
	}
	_putchar('\n');
}
