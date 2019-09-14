#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that prints nodes data in a dlinkedlist
 * @h: header pointer to the dlinked list
 * Return: amount of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
