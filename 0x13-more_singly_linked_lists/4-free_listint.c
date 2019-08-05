#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		head = tmp->next;
		free(tmp);
		tmp = head;
	}
}
