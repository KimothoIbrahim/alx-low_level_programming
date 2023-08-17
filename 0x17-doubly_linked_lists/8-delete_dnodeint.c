#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node
 *
 * @head: list head
 * @index: node index
 * Return: succees 1 / fail -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hola;
	dlistint_t *loha;
	unsigned int i;

	hola = *head;

	if (hola != NULL)
		while (hola->prev != NULL)
			hola = hola->prev;

	i = 0;

	while (hola != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = hola->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				loha->next = hola->next;

				if (hola->next != NULL)
					hola->next->prev = loha;
			}

			free(hola);
			return (1);
		}
		loha = hola;
		hola = hola->next;
		i++;
	}

	return (-1);
}
