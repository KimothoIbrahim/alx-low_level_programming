#include "main.h"

/**
 * _strncat - desc
 * @dest: desc
 * @src: desc
 * @n: desc
 *
 * Return:
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, length;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		length = i;
	}

	for (j = 0; j < n; j++)
	{
		*(dest + ((length + 1) + j)) = *(src + j);
	}

	return (dest);
}
