#include "main.h"
#include <string.h>

/**
 * _puts - desc
 * @str: pointer
 *
 */

void _puts(char *str)
{
	int a = strlen(str);
	int i;

	for (i = 0; i < a; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
