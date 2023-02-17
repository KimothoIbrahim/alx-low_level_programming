#include <stdio.h>

/**
 * main -entry pint
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char : %u byte(s) \n", (unsigned int)sizeof(a));
	printf("Size of an int : %llu byte(s) \n", (unsigned long long)sizeof(b));
	printf("Size of a long int : %lu byte(s) \n", (unsigned long)sizeof(c));
	printf("Size of a long long int : %lu byte(s) \n", sizeof(d));
	printf("Size of a float int : %lu byte(s) \n", sizeof(e));
	return (0);
}
