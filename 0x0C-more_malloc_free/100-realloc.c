#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to previsouly memory location
 * @old_size: size of old memory block
 * @new_size: size of new memory block
 *
 * Return: pointer to newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer, *old_pointer;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	pointer = malloc(new_size);
	if (!pointer)
		return (NULL);
	old_pointer = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pointer[i] = old_pointer[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			pointer[i] = old_pointer[i];
	}
	free(ptr);
	return (pointer);
}
