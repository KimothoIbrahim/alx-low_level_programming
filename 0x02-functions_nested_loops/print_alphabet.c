#include "main.h"

/*
 * print_alphabet : called by main
 * description : loops from a to z and prints a character to standard out put on every iteration
 * Returns nothing
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
