#include "main.h"
#include <string.h>
/**
 * *_strcat - desc func
 * @dest: desc
 * @src: desc
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int a = strlen(src);
	int b = strlen(dest);
	int i;

	for (i = 0; i < a; i++)
	{
		dest[b] = src[i];
		b++;
	}
	return (dest);
}
