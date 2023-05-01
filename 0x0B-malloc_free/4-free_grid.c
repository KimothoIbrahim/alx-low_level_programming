#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free memory allocated to a 2D array
 * @grid: pointer to 2D array
 * @height: rows of @D array
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
