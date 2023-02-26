#include <stdio.h>

/**
 * fizz_buzz - prints fizzbuzz for multiples of 15, buzz for
 * multiples of 5 and fizz for multiples of 3.
 *
 * main - description
 *
 * Return: always returns 0
 *
 */

void fizz_buzz(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", a);
	}
	printf("\n");
}

int main(void)
{
	fizz_buzz();
	return (0);
}
