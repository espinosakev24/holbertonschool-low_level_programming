#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that removes the header node
 * @head: dobule pointer to the linked list
 * Return: the n memeber
 */

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
