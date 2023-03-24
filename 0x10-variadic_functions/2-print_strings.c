#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - function adding all provided parameters
 * @separator: desc
 * @n: desc
 *
 * Return: returns nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i =0; i < n; i++)
	{
		/*if (!va_arg(ap, char *))
			printf("%p", NULL);
		else*/ 
		
		if (i == n-1 || separator == NULL)
			printf("%s", va_arg(ap, char *));
		else
			printf("%s%c ", va_arg(ap, char *), *separator);
	}

	va_end(ap);
	printf("\n");

}
