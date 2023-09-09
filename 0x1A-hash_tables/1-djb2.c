#include "hash_tables.h"

/**
 * hash_djb2 - djb2 algorithm hash function implementation.
 * @str: hash string.
 *
 * Return: computed hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int digest;
	int c;

	digest = 5381;
	while ((c = *str++))
		digest = ((digest << 5) + digest) + c;

	return (digest);
}
