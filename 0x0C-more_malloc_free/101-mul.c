#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - make sure string is a digit
 * @s: given string
 *
 * Return: 1 if digit 0 if not pure digit
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _stringlength - computes string length
 * @s: given string
 *
 * Return: string length
 */

int _stringlength(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - error handler
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - mutiply two numbers
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	char *firstString, *secondString;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	firstString = argv[1], secondString = argv[2];
	if (argc != 3 || !is_digit(firstString) || !is_digit(secondString))
		errors();
	len1 = _strlen(firstString);
	len2 = _strlen(secondString);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = firstString[len1] - '0';
		carry = 0;
		for (len2 = _strlen(secondString) - 1; len2 >= 0; len2--)
		{
			digit2 = secondString[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
