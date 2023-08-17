#include "lists.h"

/**
 * add_dnodeint_end - puts node at the end
 *
 * @head: list head
 * @n: element
 * Return: element address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hola;
	dlistint_t *fresh;

	fresh = malloc(sizeof(dlistint_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	hola = *head;

	if (hola != NULL)
	{
		while (hola->next != NULL)
			hola = hola->next;
		hola->next = fresh;
	}
	else
	{
		*head = fresh;
	}

	fresh->prev = hola;

	return (fresh);
}
