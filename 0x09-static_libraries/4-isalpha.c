#include "main.h"

/**
 * _isalpha - checks lower case charcters
 * @c : chracter parameter to be accessed
 * Return: 0 if true, 1 if not true.
 */

int _isalpha(int c)
{
	if ((c < 91 && c > 64) || (c < 123 && c > 96))
		return (1);
	else
		return (0);
}
