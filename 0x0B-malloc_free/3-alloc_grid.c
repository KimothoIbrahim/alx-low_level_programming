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
	int i;

	b = malloc(sizeof(int *) * height);


	for (i = 0; i < height; i++)
	{
		*(b + i) = malloc(sizeof(int) * width);
	}

	return (b);
}
