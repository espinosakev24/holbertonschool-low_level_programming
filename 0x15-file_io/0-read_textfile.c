#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * read_textfile - function that reads a file
 * @filename: name of the file
 * @letters: amount of letters
 * Return: the amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w = 0;
	int fd = open(filename, O_RDONLY);
	ssize_t n = 0;
	char *buff = malloc((sizeof(char)) * (letters));

	if (fd == -1)
		return (0);

	if (filename == NULL)
		return (0);

	n = read(fd, buff, letters);
	if (n == -1)
	{
		return (0);
	}
	w = write(STDOUT_FILENO, buff, n);
	close(fd);
	if (w == -1)
	{
		return (0);
	}
	return (w);
}
