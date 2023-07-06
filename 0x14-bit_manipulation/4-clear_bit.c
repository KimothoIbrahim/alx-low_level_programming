#include "main.h"

/**
 * clear_bit - set bit to zero
 * @n: number to work on
 * @index: bitt index to clear
 *
 * Return: return 1 on success, return -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

