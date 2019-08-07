#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that insert a node in a nth position
 * @idx: index of the function
 * @n: content of the list
 * @head: pointer header of the linked list
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *tmp;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp != NULL)
	{
		if (a == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		a++;
		tmp = tmp->next;
	}
	return (NULL);
}
