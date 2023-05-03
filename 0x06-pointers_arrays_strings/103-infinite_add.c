#include "main.h"

/**
 * workOnString - reverse array
 * @n: integer input
 */

void workOnString(char *n)
{
	int i = 0, j = 0;
	char holder;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		holder = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = holder;
	}
}

/**
 * infinite_add - add niumbers
 * @n1: first number as a string
 * @n2: second number in string form
 * @r: pointer to buffer
 * @size_r: size of buffer
 *
 * Return: pointer to associated function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int excess = 0, i = 0, j = 0, numbers = 0;
	int firstValue = 0, secondValue = 0, holder = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || excess == 1)
	{
		if (i < 0)
			firstValue = 0;
		else
			firstValue = *(n1 + i) - '0';
		if (j < 0)
			secondValue = 0;
		else
			secondValue = *(n2 + j) - '0';
		holder = firstValue + secondValue + excess;
		if (holder >= 10)
			excess = 1;
		else
			excess = 0;
		if (numbers >= (size_r - 1))
			return (0);
		*(r + numbers) = (holder % 10) + '0';
		numbers++;
		j--;
		i--;
	}
	if (numbers == size_r)
		return (0);
	*(r + numbers) = '\0';
	workOnString(r);
	return (r);
}
