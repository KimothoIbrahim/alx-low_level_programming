#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - change size of allocated memory
 * @ptr: ponter to last memory allocation
 * @old_size: size of old memory allocatio
 * @new_size: size of new memory allocation
 *
 * Return: returns pointer to new memory allocation
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr, *temp;
	unsigned int i;

	temp = (char *)ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		newPtr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		newPtr = malloc(new_size);

		for (i = 0; i < old_size; i++)
			newPtr[i] = temp[i];
		free(ptr);
	}

	if (new_size < old_size)
	{
		newPtr = malloc(new_size);

		for (i = 0; i < new_size; i++)
			newPtr[i] = temp[i];
		free(ptr);
	}
	return (newPtr);
}
