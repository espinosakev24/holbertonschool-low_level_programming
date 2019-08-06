#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a linked list
 * @head: double pointer to the linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	if (*head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	*head = NULL;
}
