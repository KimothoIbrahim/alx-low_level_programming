#include "main.h"
#include <stddef.h>

/**
 * _strchr - function
 * @s: desc
 * @c: desc
 *
 *Return: f or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return (NULL);
}
