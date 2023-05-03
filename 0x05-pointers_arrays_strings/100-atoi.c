#include "main.h"
#include <string.h>

/**
 * _atoi - converts a string to an integer
 * @s: given string
 *
 * Return: 0 if no number present, number if number present
 */

int _atoi(char *s)
{
	int i = 0, a = 0, n = 0, length = 0, b = 0, number = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && b == 0)
	{
		if (s[i] == '-')
			++a;
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = s[i] - '0';
			if (a % 2)
				number = -number;
			n = n * 10 + number;
			b = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			b = 0;
		}
		i++;
	}

	if (b == 0)
		return (0);
	return (n);
}
