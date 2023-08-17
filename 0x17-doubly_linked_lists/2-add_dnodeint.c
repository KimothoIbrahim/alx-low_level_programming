#include "lists.h"

/**
 * add_dnodeint - node at start of list
 *
 * @head: list head
 * @n: element
 * Return: address of element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *fresh;
	dlistint_t *hola;

	fresh = malloc(sizeof(dlistint_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->prev = NULL;
	hola = *head;

	if (hola != NULL)
	{
		while (hola->prev != NULL)
			hola = hola->prev;
	}

	fresh->next = hola;

	if (hola != NULL)
		hola->prev = fresh;

	*head = fresh;

	return (fresh);
}
