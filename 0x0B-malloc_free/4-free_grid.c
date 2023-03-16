#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory previosly allocated to a 2D array 
 * @grid: grid address
 * @height: array height
 */

void free_grid(int **grid, int height)
{
	free(grid * 4);
}
