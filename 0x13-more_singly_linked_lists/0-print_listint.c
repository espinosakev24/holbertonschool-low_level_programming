#include <stdio.h>
#include "lists.h"
/**
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	int n;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
