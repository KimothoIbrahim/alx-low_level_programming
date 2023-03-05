#include "main.h"

/**
 * cap_string - desc
 * @a: desc
 *
 * Return: a
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; *(a + i) != '\0'; i++)
	{
		if (*(a + i) > 96 && *(a + i) < 123 && (*(a + (i - 1)) < 65 ||
		*(a + (i - 1)) == 123 || *(a + (i - 1)) == 125))
			*(a + i)  = (*(a + i) - 32);
	}


	return (a);
}
