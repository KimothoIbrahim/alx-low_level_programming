#include "lists.h"

/**
 * get_nodeint_at_index - desc
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: desc
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *s = head;

	while (s && i < index)
	{
		s = s->next;
		i++;
	}

	if (s)
		return (s);
	else
		return (NULL);
}
