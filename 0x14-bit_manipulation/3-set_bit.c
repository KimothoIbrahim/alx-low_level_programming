#include "main.h"

/**
 * set_bit - set bit to 1 at given index
 * @n: pointer to given numer
 * @index: bit index to be set
 *
 * Return: return 1 on success, on failure return -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
