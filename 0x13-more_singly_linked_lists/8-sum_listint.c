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

	if (head->next == NULL)
		return (0);

	while (*head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

