#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *  * main -entry pint
 *   *
 *    * Description: 'the program's description'
 *     *
 *      * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{
		if (n < 0)
		{
		printf("%d is negative\n", n);
		}
		else
		{
		if (n == 0)
		{
		printf("%d is zero\n", n);
		}
		else
		{
		printf("%d is positive\n", n);
		}
		}
}
