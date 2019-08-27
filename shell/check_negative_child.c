#include "holberton.h"
/**
 * check_negative_child - free buffer and print error.
 * Return: void.
 */
int check_negative_child(char *buffer)
{
	free(buffer);
	perror("Error");
	return (-1);
}
