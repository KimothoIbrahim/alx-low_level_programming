/**
 * key_index - Make index for storage in hash table.
 * @key: Key input.
 * @size: Hash table size.
 *
 * Return: The index of the key's index.
 * Description: algorithm used - djd2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
