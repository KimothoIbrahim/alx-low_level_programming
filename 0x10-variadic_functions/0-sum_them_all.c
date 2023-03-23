#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * sum_them_all - function adding all provided parameters
 * @n: first arg
 *
 * Return: returns sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
