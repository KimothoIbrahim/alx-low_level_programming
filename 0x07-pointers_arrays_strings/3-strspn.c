#include "main.h"

/**
 * _strspn - function
 * @s: desc
 * @accept: desc
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int x, l;

	for (i = 0; s[i] != '\0'; i++)
	{
		x = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				x++;
		}

		if (x == 0)
			return (i);
	}

	for (l = 0; s[i] != '\0'; i++)
		l++;

	return (l);
}
