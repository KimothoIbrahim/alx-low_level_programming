#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - returns the modulo of the number
 * @x : input
 * @y : other input
 *
 * Return: modulo of x
 */

int print_last_digit(int x)
{	
	int y;

	if (x < 0)
	{
	y = (x % 10) * -1;
	_putchar('0' + y);
	return (y);
	}
	_putchar('0' + (x % 10));
	return (x % 10);
}
