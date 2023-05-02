#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * free_listint_safe - free linked list
 * @h: pointer to first node of linked list
 *
 * Return: number of elements in freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int t;
	listint_t *holder;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		t = *h - (*h)->next;
		if (t > 0)
		{
			holder = (*h)->next;
			free(*h);
			*h = holder;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
