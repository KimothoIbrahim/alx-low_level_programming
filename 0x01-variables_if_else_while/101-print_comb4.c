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
{		int a, b, c;
			
		for (a = 48; a < 58; a++)
		{
		for (b = 48; b < 58; b++)
		{
		for (c = 48; c < 58; c++)
		{
		if (a != b && b != c && c != a && a < b && b < c)
		{
		putchar(a);
		putchar(b);
		putchar(c);
		putchar(44);
		putchar(32);
		}
		}
		}
		}
		putchar('\n');
		return (0);
}
