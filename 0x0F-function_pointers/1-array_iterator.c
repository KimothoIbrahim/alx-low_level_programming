#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Recievse an array and function pointer,
 *		iterates array to print the value of every array element
 * @array: array pionter
 * @size: size of array
 * @action: function pionter
 *
 * Return: returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{	unsigned long i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
