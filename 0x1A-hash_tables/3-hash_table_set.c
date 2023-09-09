#include "hash_tables.h"

/**
 * hash_table_set - Hash table ADD/UPDATE.
 * @ht: Hash table pointer.
 * @key: Key for addding
 * @value: Key's value
 *
 * Return: Upon failure - 0.
 *         Else - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *copied;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copied = strdup(value);
	if (copied == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size)
		for (i = index; ht->array[i]; i++)
		{
			if (strcmp(ht->array[i]->key, key) == 0)
			{
				free(ht->array[i]->value);
				ht->array[i]->value = copied;
				return (1);
			}
		}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(copied);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = copied;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
