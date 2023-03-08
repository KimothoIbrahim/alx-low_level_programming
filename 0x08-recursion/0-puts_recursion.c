#include "main.h"

/**
 * _puts_recursion - prints a string by Recursion
 * @s: string array
 *
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
