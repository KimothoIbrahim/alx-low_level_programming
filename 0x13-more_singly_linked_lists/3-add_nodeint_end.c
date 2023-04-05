#include "lists.h"
#include <stddef.h>

/**
 * add_nodeint_end - node at end of list
 * @head: pointer to head node
 * @n: data for new node
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *newNode = (listint_t) malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	listint_t *endNode = *head;

	newNode->n = n;

	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (endNode->next != NULL)
		endNode = endNode->next;

	endNode->next = newNode;

	return (newNode);
}
