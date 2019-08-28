#include "holberton.h"
/**
 * err_execve - print error, free pointer and exit
 * @buffer: pointer that stores the std input
 * return: void.
 */
void err_execve(char *buffer)
{
	perror("Error");
	free(buffer);
	exit(EXIT_FAILURE);
}
