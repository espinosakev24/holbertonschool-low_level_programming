#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function adds node at the begging of a list.
 * @head: Double point to head of the list
 * @str: pointer to the string of the list
 * Return: kevnode.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *kevnode = malloc(sizeof(list_t));
	if (str == NULL)
	{
		return (NULL);
	}
	if (kevnode == NULL)
	{
		return (NULL);
	}
	kevnode->str = strdup(str);
	kevnode->len = _strlen(kevnode->str);
	kevnode->next = *head;
	*head = kevnode;

	return (kevnode);
}
/**
 * _strlen - check the code for Holberton School students.
 * @s: pointer to holberton
 * Return: Always n.
 */
int _strlen(char *s)
{
	int n;

	n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}

