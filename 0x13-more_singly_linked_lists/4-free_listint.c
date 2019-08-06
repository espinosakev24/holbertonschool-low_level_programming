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

	tmp = head;
	while (tmp != NULL)
	{
		head = tmp->next;
		free(tmp);
		tmp = head;
	}
}
