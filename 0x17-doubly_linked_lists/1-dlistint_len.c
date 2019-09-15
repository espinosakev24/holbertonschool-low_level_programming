#include "lists.h"
/**
 * dlistint_len - functiont that returns amount of nodes in a dlinkedlist
 * @h: header node that points to the list
 * Return: amount of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
