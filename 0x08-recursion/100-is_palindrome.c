#include "main.h"

int _pal(char *s, int i, int len);
int _strlen(char *s);

/**
 * is_palindrome - check for a palindrome
 * @s: given string
 *
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_pal(s, 0, _strlen(s)));
}

/**
 * _strlen - calculate string length
 * @s: given string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _pal - check characters
 * @s: given string
 * @i: iterative variable
 * @len: string length
 *
 * Return: 1 if true, 0 if false
 */

int _pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_pal(s, i + 1, len - 1));
}
