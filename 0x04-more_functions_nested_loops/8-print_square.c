#include "main.h"

/**
 * print_square - make square based on user input
 * @size: length and width of square
 *
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 0; a < size; a++)
		{
			int b;

			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
