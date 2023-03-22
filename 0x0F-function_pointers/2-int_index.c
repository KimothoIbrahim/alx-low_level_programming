#include "function_pointers.h"

/**
 * int_index - Searches for an integer matching a particular criteria
 * @array: provided array
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: returns -1 of no number matches the criteria,
 * 	returns the index of the number that is a correct match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if(cmp(array[i]))
				return (i);
		}
	}
		return (-1);
}
