#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - returns the modulo of the number
 * @x : input
 *
 * Return: modulo of x
 */

int print_last_digit(int x)
{
	if (x < 0)
	{
	_putchar('0' + ((x % 10) * -1));
	return (x % 10);
	}
	_putchar('0' + (x % 10));
	return (x % 10);
}
