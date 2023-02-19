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
{
		int n, lastNumber;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		lastNumber = n % 10;
		if (lastNumber > 5)
		{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNumber);
		}
		else
		{
		if (lastNumber == 0)
		{
		printf("Last digit of %d is %d and is 0\n", n, lastNumber);
		}
		else
		{
		printf("Last digit of %d is %d and is less than 6 ", n, lastNumber);
		printf("and not 0\n");
		}
		}
		return (0);
}
