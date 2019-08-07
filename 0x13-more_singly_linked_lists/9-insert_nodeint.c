#include <stdlib.h>
#include "lists.h"
/**
 *
 *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a = 0;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (*head != NULL)
	{
		if (a == idx - 1)
		{
			new_node->next = (*head)->next;
			(*head)->next = new_node;
			return (new_node);
		}
		a++;
		*head = (*head)->next;
	}
	new_node = *head;
	return (new_node);
}
