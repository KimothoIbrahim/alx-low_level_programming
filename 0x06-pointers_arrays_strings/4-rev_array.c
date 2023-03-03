#include "main.h"
#include <stdio.h>

/**
 * reverse_array - func
 * @a: desc
 * @n: desc
 *
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int c = *(a + i);
		*(a + i) = *(a + ((n - 1) - i));
		*(a + ((n - 1) - i)) = c;
	}
}
