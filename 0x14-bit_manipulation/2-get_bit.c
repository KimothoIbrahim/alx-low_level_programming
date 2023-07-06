#include "main.h"

/**
 * get_bit - get a value of bit at a given position
 * @n: number to look for
 * @index: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;
	return (value);
}
