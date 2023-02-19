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
{		char character = 'z';
		while (character >= 'a')
		{
		putchar(character);
		character--;
		}
		putchar('\n');
		return (0);
}
