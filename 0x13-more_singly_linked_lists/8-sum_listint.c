#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function that adds all ints members
 * @head: head pointer to the linked list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		n = n + head->n;
		head = head->next;
	}
	return (n);
}
