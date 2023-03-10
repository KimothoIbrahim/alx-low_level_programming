#include "main.h"

/**
 * _abs - checks lower case charcters
 * @n : chracter parameter to be accessed
 * Return: 0 if true, 1 if not true.
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	return (n);
}
