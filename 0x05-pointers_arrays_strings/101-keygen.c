#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator
 *
 * Return: 0 on success
 */

int main(void)
{
	int password[100];
	int i, sum = 0, a;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		sum += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			a = 2772 - sum - '0';
			sum += a;
			putchar(a + '0');
			break;
		}
	}

	return (0);
}
