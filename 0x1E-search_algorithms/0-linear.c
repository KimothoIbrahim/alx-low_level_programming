#include <stdio.h>
#include "search_algos.h"
#include <stdlib.h>

/**
 * linear_search - do a linear search algorith
 *
 * @array: pointer to first element in array
 * @size: size of array
 * @value: value to search for in the given arrray
 *
 * Return: if `value` is not found return -1, otherwise
 * return index of the first occurence of `value`
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = %d \n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
