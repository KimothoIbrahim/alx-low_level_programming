#include "main.h"

/**
 * string_toupper - desc
 * @a: desc
 *
 * Return: the pointer *a
 */

char *string_toupper(char *a)
{
	int j;

	for (j = 0; *(a + j) != '\0'; j++)
	{
		if ((*(a + j) > 96 && *(a + j) < 123))
			*(a + j) = (*(a + j) - 32);
	}

	return (a);
}
