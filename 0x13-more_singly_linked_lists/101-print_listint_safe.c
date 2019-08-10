#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - function that deletes a node in a nth position
 * @head: head pointer of the function
 * @index: iterator
 * Return: the index
 */
size_t print_listint_safe(const listint_t *head)
{
int n  = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		n++;
		head = head->next;
	}
	return (n);
}
