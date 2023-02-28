#include "main.h"
#include <string.h>

/**
 * print_rev - desc
 * @s:
 *
 */

void print_rev(char *s)
{
	int a = strlen(s);
	int i;

	for (i = a - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
