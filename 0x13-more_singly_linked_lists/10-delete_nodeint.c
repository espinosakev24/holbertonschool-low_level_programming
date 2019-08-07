#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes a node in a nth position
 * @head: head pointer of the function
 * @index: iterator
 * Return: the index
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *tmp = *head, *aux;

	if (*head == NULL)
		return (0);

	if (head == NULL)
		return (0);

	while (tmp != NULL)
	{
		if (n == index - 1)
		{
			aux = tmp->next;
			free(tmp->next);
			tmp->next = aux;
			return (index);
		}
		n++;
		tmp = tmp->next;
	}
		return (-1);
}
