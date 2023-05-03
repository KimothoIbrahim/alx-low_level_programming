#include "main.h"

/**
 * print_number - print integers
 * @n: integer input
 */

void print_number(int n)
{
	unsigned int new;

	new = n;

	if (n < 0)
	{
		_putchar('-');
		new = -n;
	}

	if (new / 10 != 0)
	{
		print_number(new / 10);
	}
	_putchar((new % 10) + '0');
}
