#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main -entry pint
 *   *
 *    * Description: 'the program's description'
 *     *
 *      * Return: Always 0 (Success)
 */

int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		if (n < 0)
		{
		printf("negative\n");
		}
		else
		{
		if (n == 0)
		{
		printf("zero\n");
		}
		else
		{
		printf("positive\n");
		}
		}
		return (0);
}
