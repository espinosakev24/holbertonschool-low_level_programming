#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that return the amount of nodes
 * @h: header pointer
 * Return: amunt of nodes
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
