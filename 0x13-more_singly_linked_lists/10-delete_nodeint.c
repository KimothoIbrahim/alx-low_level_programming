#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at given index
 * @head: pointer to first element of a linled list
 * @index: node index to delete
 *
 * Return: 1 on Success -1 on Failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *movingPointer = *head;
	listint_t *thisPointer = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(movingPointer);
		return (1);
	}

	while (i < index - 1)
	{
		if (!movingPointer || !(movingPointer->next))
			return (-1);
		movingPointer = movingPointer->next;
		i++;
	}

	thisPointer = movingPointer->next;
	movingPointer->next = thisPointer->next;
	free(thisPointer);

	return (1);
}
