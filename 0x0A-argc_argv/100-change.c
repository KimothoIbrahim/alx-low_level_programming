#include <stdio.h>
#include <stdlib.h>

/**
 * change - print number of coins needed to make the change
 * @x: param
 * @s: array
 *
 * Return: number of coins making up the change
 */

int change(int x, int *s)
{
	int coin, mul, coins = 0;

	if (*s == 0)
		return (0);

	coin = x / *s;
	mul = coin * *s;
	coins = coin + change((x - mul), (s + 1));

	return (coins);
}

/**
 * main - calls the change() function
 * @argc: argument count parameter.
 * @argv: an array of the provided string arguments given to ./change program
 *
 * Return: returns 1/Error if no argument
 * is given: 0 if argument is either +ve / -ve
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int dinominations[] = {25, 10, 5, 2, 1, 0};

	if (argc != 2)
	{
		printf("Error \n");
		return (1);
	}
	else if (*argv[1] < '0')
	{
		printf("0 \n");
		return (0);
	}
	else
	{
		printf("%d \n", change(atoi(argv[1]), dinominations));
		return (0);
	}
}
