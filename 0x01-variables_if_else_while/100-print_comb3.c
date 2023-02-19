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
{		int a, b;
			
		for (a = 48; a < 58; a++)
		{
		for (b = 48; b < 58; b++)
		{
		if (a != b && a < b)
		{
		putchar(a);
		putchar(b);
		if (a + b != 113)
		{
		putchar(44);
		putchar(32);
		}
		}
		}
		}
		putchar('\n');
		return (0);
}
