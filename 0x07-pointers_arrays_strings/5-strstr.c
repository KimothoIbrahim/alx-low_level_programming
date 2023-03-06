#include "main.h"
#include <stddef.h>

/**
 * _strstr - func
 * @haystack: desc
 * @needle: desc
 *
 * Return: val
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int length, x;

	x = 0;
	length = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			length = j;
			if (haystack[i] == needle[j])
				x = j;
		}
		if (x == length)
			return ((haystack + i) - length);
	}
	return (NULL);
}
