#include "main.h"

/**
 * _strcmp - function comparing the second string (parameter 2)
 * to the first string (parameter 1)
 * @s1: first string
 * @s2: second string
 *
 * Return: an -ve integer if s2 is greater than s1, +ve is the
 * opposite is true and 0 if they are the same
 */

int _strcmp(char *s1, char *s2)
{	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		return (*(s1 + i) - *(s2 + i));
	}
	return (s1[0] - s2[0]);
}
