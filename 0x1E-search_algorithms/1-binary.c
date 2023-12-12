#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - prints an array
 *
 * @array: given array
 * @l: left
 * @r: right
 */
void print_array(int *array, int l, int r)
{
	int i;

	for (i = l; i < r; i++)
		printf("%d, ", array[i]);
	printf("%d \n", array[i]);
}

/**
 * binary_search - use binary search algorithm
 *
 * @array: pointer to first array element
 * @size: size of the array
 * @value: to find in the array
 *
 * Return: index of found value or -1 if unsuccessful
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		print_array(array, left, right);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
