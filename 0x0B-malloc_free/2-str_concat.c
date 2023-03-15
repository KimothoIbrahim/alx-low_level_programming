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
	char *a = NULL, b[] = "";
	int i, j = 0, k, l;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = b;

	if (s2 == NULL)
		s2 = b;
	
	for (k = 0; s1[k] != '\0'; k++)
		len1 = k + 1;
		
	for (l = 0; s2[l] != '\0'; l++)
		len2 = l + 1;

	a = malloc(len1 + len2 + 1);
	
	if (a == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2 ; i++)
	{
		if (a[i] != '\0')
			a[i] = s1[i];
		else
			a[i] = s2[j];
		j++;
	}
	
	a[len1 + len2 + 1] = '\0';

	return (a);
}
