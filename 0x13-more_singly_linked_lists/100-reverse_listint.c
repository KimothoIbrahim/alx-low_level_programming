#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to start of list
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextNode = NULL, *previousNode = NULL;

	while (*head)
	{
		nextNode = (*head)->next;
		(*head)->next = previousNode;
		previousNode = *head;
		*head = nextNode;
	}

	*head = previousNode;

	return (*head);
}
