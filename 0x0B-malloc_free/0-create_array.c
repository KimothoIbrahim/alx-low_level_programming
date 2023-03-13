#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - returns created pointer to memory of array
 * @size: desc
 * @c: desc
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (!size)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
	{
		printf("Error: program FAILED \n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);





}
