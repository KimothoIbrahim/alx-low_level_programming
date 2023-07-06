#include "main.h"

/**
 * flip_bits - determines number of bits to be changed
 * to change from one number to another
 * @n: first given number
 * @m: second given number
 *
 * Return: number of bits to  be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, tally = 0;
	unsigned long int now;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		now = exclusive >> i;
		if (now & 1)
			tally++;
	}

	return (tally);
}
