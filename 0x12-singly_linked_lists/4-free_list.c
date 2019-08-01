#include <stdio.h>
#include "lists.h"
/**
 * free_list - function that frees a lists.
 * @head: pointer to the list
 * Return: void.
 */
void free_list(list_t *head)
{
	free(head);
}
