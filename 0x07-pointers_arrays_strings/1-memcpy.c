#include "main.h"

/**
 * _memcpy - function
 * @dest: desc
 * @src: desc
 * @n: desc
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);

}
