#include "main.h"

/**
 * swap_int - swap addresses to swap values
 *
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
