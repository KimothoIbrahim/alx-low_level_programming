#include "main.h"
#include <string.h>

/**
 * rev_string - desc
 * @s: pointer
 *
 */

void rev_string(char *s)
{
	int a = strlen(s);
	int i;
	int b = a - 1;

	for (i = 0; i < a / 2; i++)
	{	char t = *(s + i);
		*(s + i) = *(s + (b - i));
		*((s + (b - i))) = t;
	}
}
