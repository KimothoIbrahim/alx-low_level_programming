#include "main.h"
#include <string.h>

/**
 * _atoi - desc
 * @s: desc
 *
 * Return : 0 if no number present, number if number present
 */

int _atoi(char *s)
{
	int a = strlen(s);
	int i, n, number;
	int x;
	
	x= 1;
	number = 0;

	for (i = a - 1; i >= 0; i--)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			n = s[i];
			number += ((n - 48) * x);
			x *= 10;
		}
	}
	return (number);
}
