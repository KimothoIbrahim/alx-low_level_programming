#include "main.h"

/**
 *
 *
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, length;

	for (i = 0; *(dest + i) != '\n'; i++)
		length = i - 1;

	for (j = 0; j < n; j++)
		*(dest + (length + j)) = *(src + j);

	return (dest);
}
