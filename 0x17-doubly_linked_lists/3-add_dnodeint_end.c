#include "lists.h"
/**
 * add_dnodeint_end - function that adds a node at the end of a db lkedlist
 * @head: db pointer to the db linked list
 * @n: db linked list data
 * Return: new_node or end node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *aux;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	aux = *head;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	new_node->prev = aux;
	aux->next = new_node;
	return (new_node);
}
