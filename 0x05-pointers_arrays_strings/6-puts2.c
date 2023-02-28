#include "main.h"
#include <string.h>

/**
 * puts2 -
 * @str:
 *
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
