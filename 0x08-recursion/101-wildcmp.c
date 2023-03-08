#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * wildcmp - funct
 * @str1: desc
 * @str2: desc
 *
 * Return: 1 , increment, 0
 */

int wildcmp(char *str1, char *str2)
{
	if (*str1 == '\0' && *str2 == '\0')
	{
		/* base case: both strings have reached the end*/
		return (1);
	}

		/* strings are identical*/
	else if (*str1 == *str2)
	{
		/* recursive case: characters match, check next characters in each string*/
		return (wildcmp(++str1, ++str2));
	}
	else if (*str2 == '*')
	{
		return (wildcmp(str1, ++str2));
	}
	else
	{
		/* recursive case: characters don't match, strings are not identical*/
		return (0);
	}
}

