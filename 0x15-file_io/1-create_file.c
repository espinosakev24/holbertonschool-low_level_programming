#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"
/**
 *
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	int i = 0, a = 0;

	i = _strlen(text_content);
	if (filename == NULL)
	{
		return (-1);
	}
	if (fd == -1)
		return (-1);

	if (fd == -1)
	{
		return (0);
	}
	if (text_content == NULL)
	{
		open(filename, O_CREAT, 0600);
	}
	a = write(fd, text_content, i);
	if (a == -1)
		return (-1);
	close(fd);
	return (1);
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
