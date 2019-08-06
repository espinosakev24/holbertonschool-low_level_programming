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

	while (tmp != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	*head = NULL;
}
