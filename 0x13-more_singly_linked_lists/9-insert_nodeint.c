#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inser new node at given index
 * @head: pointer to start of list
 * @idx: index to insert new node
 * @n: value of new node
 *
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *movingPointer;
	unsigned int index = 0;

	movingPointer = *head;

	if (idx == 0)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (movingPointer)
	{
		if ((idx - 1) == index)
		{
			newNode = malloc(sizeof(listint_t));
			if (!newNode)
				return (NULL);
			newNode->n = n;
			newNode->next = movingPointer->next;
			movingPointer->next = newNode;
			return (newNode);
		}

		index++;
		movingPointer = movingPointer->next;
	}
	return (NULL);
}
