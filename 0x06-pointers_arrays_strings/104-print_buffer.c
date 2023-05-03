#include "main.h"
#include <stdio.h>
/**
 * print_buffer - buffer printer
 * @b: buffer
 * @size: size
 */

void print_buffer(char *b, int size)
{
	int a = 0, c, j, i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		j = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + a + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			c = *(b + a + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		a += 10;
	}
}
