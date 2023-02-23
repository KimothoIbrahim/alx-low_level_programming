#include "main.h"

/**
 * print_sign - checks lower case charcters
 * @n : chracter parameter to be accessed
 * Return: 0 if true, 1 if not true.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		_putchar('-');
		return (-1);
	}
}
