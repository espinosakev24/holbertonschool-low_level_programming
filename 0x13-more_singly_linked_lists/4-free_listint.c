#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees a  linked list
 * @head: head pointer to the linked list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = head;
	while (tmp != NULL)
	{
		head = tmp->next;
		tmp = head;
		free(tmp);

	}
}
