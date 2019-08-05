#include <stdio.h>
#include "lists.h"
/**
 *
 *
 *
 */
size_t listint_len(const listint_t *h)
{
	int n;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
