#include "main.h"

/**
 * leet - function desc
 * @a: desc
 *
 * Return: a
 */

char *leet(char *a)
{
	int i, j;
	char b[] = {'a', 'e', 'o', 't', 'l'};
	char c[] = {'4', '3', '0', '7', '1'};

	for (i = 0; *(a + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(a + i) == *(b + j) || *(a + i) == (*(b + j) - 32))
				*(a + i) = c[j];
		}
	}
	return (a);
}
