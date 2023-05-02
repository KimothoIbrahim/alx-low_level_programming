#include "lists.h"

/**
 * find_listint_loop - discover loop in linked list
 * @head: the linked list
 *
 * Return: loop start node address
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *great = head;
	listint_t *small = head;

	if (!head)
		return (NULL);

	while (great && small && small->next)
	{
		small = small->next->next;
		great = great->next;
		if (small == great)
		{
			great = head;
			while (great != small)
			{
				great = great->next;
				small = small->next;
			}

			return (small);
		}
	}

	return (NULL);
}
