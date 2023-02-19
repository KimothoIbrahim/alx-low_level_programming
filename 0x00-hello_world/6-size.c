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

	printf("Size of a char : %d byte(s) \n", (char)sizeof(a));
	printf("Size of an int : %u byte(s) \n", (unsigned int)sizeof(b));
	printf("Size of a long int : %lu byte(s) \n", (unsigned long)sizeof(c));
	printf("Size of a long long int : %llu byte(s) \n", (unsigned long long)sizeof(d));
	printf("Size of a float int : %ld byte(s) \n", sizeof(e));
	return (0);
}
