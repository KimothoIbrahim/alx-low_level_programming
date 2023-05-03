#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i = 0, a = 0, b = 0, length = 0, c = 0, number = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && c == 0)
	{
		if (s[i] == '-')
			++a;
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = s[i] - '0';
			if (a % 2)
				number = -number;
			b = b * 10 + number;
			c = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			c = 0;
		}
		i++;
	}
	if (c == 0)
		return (0);
	return (b);
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on Success and 1 on Error
 */

int main(int argc, char *argv[])
{
	int output, firstNumber, secondNumber;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	firstNumber = _atoi(argv[1]);
	secondNumber = _atoi(argv[2]);
	output = firstNumber * secondNumber;

	printf("%d\n", output);
	return (0);
}
