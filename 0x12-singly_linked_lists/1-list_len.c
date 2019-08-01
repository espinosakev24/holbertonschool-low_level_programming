#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that counts  amount of nodes.
 * @h: The pointer that points to header of the struct
 * Return: n.
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
