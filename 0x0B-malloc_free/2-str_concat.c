#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings to new location in memory
 * @s1: string one
 * @s2: string two
 *
 * Return: returns a pointer to the concatenated string location in memory.
 * returns NULL if memory allocation failed.
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned long int i, temp, j;

	if (NULL)
	{
		a = "";
		return (a);
	}

	a = malloc(sizeof(s1) + sizeof(s2) - 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i + 1 <= sizeof(a); i++)
	{
		if (s1[i] != '\0')
			a[i] = s1[i];
		else
			temp = i;
	}

	for (j = 0; j <= sizeof(a); j++)
	{
		a[j + temp] = s2[j];
	}

	return (a);
}
