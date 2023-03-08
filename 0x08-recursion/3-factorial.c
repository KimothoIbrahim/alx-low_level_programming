#include "main.h"

/**
 * factorial - works out n x n-1 ... x 1
 * @n: provided integer
 *
 * Return: skill
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
