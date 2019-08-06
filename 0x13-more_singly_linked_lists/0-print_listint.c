#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that print a linked list content
 * @h: header pointer
 * Return: amount of nodes
 */
size_t print_listint(const listint_t *h)
{
	int n  = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
