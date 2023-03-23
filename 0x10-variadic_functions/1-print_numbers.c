#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - function adding all provided parameters
 * @separator: desc
 * @n: desc
 *
 * Return: returns nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i =0; i < n; i++)
	{	
		if (i == n-1 || separator == NULL)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%c ", va_arg(ap, int), *separator);
	}
	va_end(ap);
	printf("\n");

}
