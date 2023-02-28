#include "main.h"
#include <string.h>

/**
 * puts_half - desc
 * @str: string
 *
 */
void puts_half(char *str)
{
	int a = strlen(str);
	int i;

	if (a % 2 == 0)
	{
		for (i = a / 2; i < a; i++)
		{
			_putchar(*(str + i));
		}
	}

	else
	{
		for (i = (a / 2) + 1; i < a; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
