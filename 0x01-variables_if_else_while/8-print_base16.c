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
{		int number = 48;
		char character = 'a';

		while (number < 58)
		{
		putchar(number);
		number++;
		}
		while (character <= 'f')
		{
		putchar(character);
		character++;
		}
		putchar('\n');
		return (0);
}
