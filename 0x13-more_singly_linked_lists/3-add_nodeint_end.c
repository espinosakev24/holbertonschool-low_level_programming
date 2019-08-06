#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds node at the end of the list
 * @head: double pointer to the head of the list
 * @n: n member (int)
 * Return: the node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;

	listint_t *end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
	{
		return (NULL);
	}

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = end_node;
	return (end_node);
}
