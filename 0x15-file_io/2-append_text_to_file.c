#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * append_text_to_file - func that append a text to the end of a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd = open(filename, O_APPEND | O_WRONLY, 0600), a = 0;
	int i = 0;

	if (text_content == NULL)
		return (1);
	i = _strlen(text_content);
	if (filename == NULL)
		return (-1);

	if (fd == -1)
		return (-1);

	a = write(fd, text_content, i);

	if (a == -1)
		return (-1);
	if (a != i)
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
