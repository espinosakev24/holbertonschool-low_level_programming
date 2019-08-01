#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints the amount of nodes.
 * @h: The pointer that points to header of the struct
 * Return: n.
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
