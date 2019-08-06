#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that return the nth node
 * @head: head pointer of the linked list
 * @index: the index to check for the node required
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n == index)
			return (head);

		n++;
		head = head->next;

	}
	return (head);
}
