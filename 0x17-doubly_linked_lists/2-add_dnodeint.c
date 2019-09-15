#include "lists.h"
/**
 * add_dnodeint - function that adds a node at the beggining of a dlinkedlist
 * @head: double pointe to the dlinked list
 * @n: data member of the node added to dlklist
 * Return: node added (new_node)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
