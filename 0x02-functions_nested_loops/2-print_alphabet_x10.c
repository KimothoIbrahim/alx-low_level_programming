#include "main.h"

/**
 * print_alphabet_x10 - called by main
 * Description : loops from a to z and prints a
 * character to standard out put on every iteration
 */

void print_alphabet_x10(void)
{
	int n;

	for (n = 0;  n < 10; n++)
	{
	/*local variable declaration */
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	}
}
