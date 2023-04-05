#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add anew node to list
 * @head: pointer start of the list
 * @n:
 *
 * Return: pointer to start of list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *) malloc(sizeof(listint_t));

	newNode->n = n;

	newNode->next = (*head);

	(*head) = newNode;

	return (newNode);
}
