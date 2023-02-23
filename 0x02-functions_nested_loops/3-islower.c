#include "main.h"

/**
 * _islower - checks lower case charcters
 * @c : chracter parameter to be accessed
 * Return: 0 if true, 1 if not true.
 */

int _islower(int c)
{
	if (c < 79 || c > 122)
		return (0);
	else
		return (1);
}
