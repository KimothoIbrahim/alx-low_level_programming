#include "main.h"
#include <string.h>

/**
 * puts2 - prints all odd charcters in a string
 * @str: given string
 */
void puts2(char *str)
{
	int a = strlen(str);
	int i;

	for (i = 0; i < a;)
	{
		_putchar(*(str + i));
		i += 2;
	}
		_putchar('\n');
}
