#include "main.h"

/**
 * print_binary - changes number to its binary representation
 * @n: provided number
 */
void print_binary(unsigned long int n)
{
	int p, state = 0;
	unsigned long int now;

	for (p = 63; p >= 0; p--)
	{
		now = n >> p;
		if (now & 1)
		{
			_putchar('1');
			state++;
		}
		else if (state)
			_putchar('0');
		if (!state)
			_putchar('0');
	}
}

