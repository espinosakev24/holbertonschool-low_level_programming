#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

int pop_listint(listint_t **head)
{
	int b = 0;

	if (*head == NULL)
	{
		return (0);
	}
	b = (*head)->n;
	free(*head);
	*head = (*head)->next;
	return (b);
}
