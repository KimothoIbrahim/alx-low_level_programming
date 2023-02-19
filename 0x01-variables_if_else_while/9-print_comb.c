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
{		int number;

		for (number = 48; number < 58; number++)
		{
		putchar(number);
		if (number != 57)
		{
		putchar(44);
		putchar(32);
		}
		}
		putchar('\n');
		return (0);
}
