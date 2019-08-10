#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - function that return the amount of nodes
 * @head: header pointer
 * Return: head
 */
listint_t *find_listint_loop(listint_t *head)
{
	int n = 0;

	while (head != NULL)
	{
		n++;
		head = head->next;
	}
	return (head);
}
