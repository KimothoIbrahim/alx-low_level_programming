#include "main.h"

/**
 * print_alphabet - called by main
 * Description : loops from a to z and prints a
 * character to standard out put on every iteration
 */

void print_alphabet(void)
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
