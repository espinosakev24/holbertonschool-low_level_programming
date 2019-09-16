#include "lists.h"
/**
 * sum_dlistint - function that adds all n members of a dblinkedlist
 * @head: ptr to dblinkedlist
 * Return: result
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int res = 0;

	while (aux)
	{
		res = res + aux->n;
		aux = aux->next;
	}
	return (res);
}
