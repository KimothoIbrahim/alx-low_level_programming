#include "lists.h"

/**
 * get_dnodeint_at_index - get selected node
 * @head: list head
 * @index: node index
 * Return: node/nothing
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int bigness;
	dlistint_t *hemp;

	bigness = 0;
	if (head == NULL)
	return (NULL);

	hemp = head;
	while (hemp)
	{
	if (index == bigness)
	return (hemp);
	bigness++;
	hemp = hemp->next;
	}
	return (NULL);
}
