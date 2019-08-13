#include <unistd.h>
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
	int fd = open(filename, O_RDONLY);
	ssize_t n = 0;
	char buff[1000];

	if (fd == -1)
		return (0);

	if (filename == NULL)
		return (0);

	n = read(fd, buff, letters);
	if (!n)
		return (0);
	write(1, buff, n);
	return (n);
	close(fd);
	return (0);
}
