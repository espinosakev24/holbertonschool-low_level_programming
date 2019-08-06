#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a  linked list
 * @head: head pointer to the linked list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
