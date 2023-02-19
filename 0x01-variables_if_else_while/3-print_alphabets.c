#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  *  * main -entry pint
 *   *   *
 *    *    * Description: 'the program's description'
 *     *     *
 *      *      * Return: Always 0 (Success)
 */

int main(void)
{		char character = 'a';
		while (character <= 'z')
		{
		putchar(character);
		character++;
		}
		character = 'A';
		while (character <= 'Z')
		{
		putchar(character);
		character++;
		}
		putchar('\n');
		return (0);
}
