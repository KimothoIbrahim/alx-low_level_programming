#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - funct
 * @a: desc
 * @size: desc
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int diag1 = 0;  /* sum of primary diagonal elements*/
	int diag2 = 0;  /* sum of secondary diagonal elements*/

	for (i = 0; i < size; i++) 
	{ 
		for (j = 0; j < size; j++)
		{
			/*Condition for principal diagonal*/ 
			if (i == j)
			{
				diag1 += a[i * size + j];
			}
			
			/*Condition for secondary diagonal*/

			if ((i + j) == (size - 1))
			{
				diag2 += a[i * size + j];
			}
		}
	}
	printf("%d, %d \n", diag1, diag2);
}
