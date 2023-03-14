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
	int i, temp, j, k, l;
	int len1 = 0, len2 = 0;

	for (k = 0; s1[k] != '\0'; k++)
		len1 = k + 1;
		
	for (l = 0; s2[l] != '\0'; l++)
		len2 = l + 1;

	if (NULL)
	{
		a = "";
		return (a);
	}

	printf("%d \n", (len1 + len2));

	a = malloc(len1 + len2 + 1);
	
	if (a == NULL)
		return (NULL);

	for (i = 0; i <= len1; i++)
	{
		a[i] = s1[i];
		temp = i;
	}

	for (j = 0; j <= len2; j++)
	{
		a[j + temp] = s2[j];
	}

	return (a);
}
