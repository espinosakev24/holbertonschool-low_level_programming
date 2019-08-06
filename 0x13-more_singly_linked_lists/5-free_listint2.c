#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a linked list
 * @head: double pointer to the linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		*head = tmp->next;
		free(tmp);
		tmp = *head;
	}
	*head = NULL;
}
