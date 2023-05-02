#include "lists.h"

/**
 * sum_listint - computes sum from nodes
 * @head: desc
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *s = head;

	while (s)
	{
		sum += s->n;
		temp = s->next;
	}

	return (sum);
}

