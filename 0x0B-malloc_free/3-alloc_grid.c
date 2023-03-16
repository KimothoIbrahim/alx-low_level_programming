#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - make a 2D array
 * @width: desc
 * @height: height
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **b;
	int i, j, k;

	if (width == 0 || height == 0)
		return (NULL);

	b = malloc(sizeof(int *) * height);

	if (b == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(b + i) = malloc(sizeof(int) * width);
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			b[j][k] = 0;
		}
	}

	return (b);
}
