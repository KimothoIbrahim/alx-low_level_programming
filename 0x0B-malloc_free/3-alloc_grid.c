#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates memory for a @D array
 * @width: number of integer per row
 * @height: rows of the 2D arry
 *
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **pointer;
	int i, j;

	if (width < 0 || height < 0)
		return (NULL);

	pointer = malloc(sizeof(int *) * height);
	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pointer[i] = malloc(sizeof(int) * width);
		if (pointer[i] == NULL)
		{
			for ( ; i >= 0; i--)
				free(pointer[i]);

			free(pointer);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			pointer[i][j] = 0;

	return (pointer);
}
