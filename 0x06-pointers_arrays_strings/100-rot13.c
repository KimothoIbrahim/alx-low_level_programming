#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @a: pointer to string
 *
 * Return: pointer to rotated string
 */

char *rot13(char *a)
{
	int i, j;
	char string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == string[j])
			{
				a[i] = rotated[j];
				break;
			}
		}
	}
	return (a);
}
