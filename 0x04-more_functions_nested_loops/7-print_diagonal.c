#include "main.h"

/**
 * print_diagonal - print a line of changing length
 * @n: length integer
 *
 */

void print_diagonal(int n)
{
	int i, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < i; b++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}
	}
}
