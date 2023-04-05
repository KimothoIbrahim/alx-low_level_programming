#include "lists.h"
#include <stddef.h>

/**
 * listint_len - counts nodes
 * @h: pointer to start of linked list
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
