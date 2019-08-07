#include "stdlib.h"
#include "lists.h"
/**
 * reverse_listint - function that reverse a linked list
 * @head: head pointer to the linked list
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t  *prev = NULL, *next = NULL;
	listint_t  *current = *head;

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
