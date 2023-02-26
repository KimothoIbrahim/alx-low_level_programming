#include "main.h"
/**
 * _isupper - returns is a character is uppercase or not
 * @c: test integer
 *
 * Return: 1 if uppercase, 0 if not.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
