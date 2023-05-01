#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - return a range of numbers from min to max
 * @min: lowest number in range
 * @max: largest number in range
 *
 * Return: pointer to the range of numbers
 */

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));

	if (!array)
		return (NULL);

	for (i = 0; min <= max; i++)
		array[i] = min++;

	return (array);
}
