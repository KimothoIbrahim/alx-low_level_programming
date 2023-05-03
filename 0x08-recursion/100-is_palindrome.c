#include "main.h"
#include <stdio.h>

/**
 * calc_length - get lenth of string
 * @s: string input
 *
 * return: length
 */

int calc_length(char *s)
{
	if(*s == '\0')
		return (0);

	return (1 + calc_length(s + 1));
}

/**
 * is_palindrome - check is string is similar from both ends
 * @s: string input
 *
 * Return: 1 if true 0 if false
 */

int is_palindrome(char *s)
{	
	if (*s == *(s + (calc_length(s + 1))))
		return (1);

	is_palindrome(s + 1);

	return (0);
}
