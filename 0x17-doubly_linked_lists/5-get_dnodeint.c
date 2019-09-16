#include "lists.h"
/**
 * get_dnodeint_at_index - functiont that returns node in a index
 * @head: pointer to dblinkedlist
 * @index: index value
 * Return: node in the given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (n == index)
			return (current);
		n++;
		current = current->next;
	}
	return (NULL);
}
