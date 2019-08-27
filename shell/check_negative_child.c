#include "holberton.h"
/**
 * check_negative_child - free buffer and print error.
 * @buffer: pointer that stores the std input string
 * Return: void.
 */
int check_negative_child(char *buffer)
{
	free(buffer);
	perror("Error");
	return (-1);
}
