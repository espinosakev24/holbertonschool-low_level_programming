#include <stdio.h>
#include "lists.h"
/**
 * free_list - function that frees a lists.
 * @head: pointer to the list
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *node;
	list_t *tmp = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (tmp != NULL)
	{
		node = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = tmp->next;
	}
}
