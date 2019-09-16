#include "lists.h"
/**
 * insert_dnodeint_at_index - function that adds a node at a given index
 * @h: dbptr to dblinkedlist
 * @idx: index
 * @n: n data member
 * Return: new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int a = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *aux = *h;

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (!aux)
		return (NULL);
	while (aux != NULL)
	{
		if (idx == a)
		{
			if (idx == 0)
			{
				return (add_dnodeint(h, n));
			}
			else
			{
				new_node->n = n;
				new_node->next = aux;
				new_node->prev = aux->prev;
				aux->prev = new_node;
				aux = new_node->prev;
				aux->next = new_node;
				return (new_node);
			}
		}
		a++;
		aux = aux->next;
	}
	if (idx == a)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
