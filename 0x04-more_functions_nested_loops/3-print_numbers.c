#include "main.h"

/**
 * print_numberrs - prints the radix of decimal
 * @i: counter and number
 *
 */

void print_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
		_putchar(i + '0');

	_putchar('\n');
}
