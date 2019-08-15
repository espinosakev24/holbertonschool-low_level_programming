#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * cp_file_content - function that copies content of a file src to dest file
 * @src: file from content will be copied
 * @dest: file where the content will be pasted
 * Return: 0
 */
int cp_file_content(const char *src, char *dest)
{
	ssize_t fd_src = open(src, O_RDONLY);
	ssize_t fd_dest = open(dest, O_WRONLY | O_TRUNC);
	ssize_t read_src = 0;
	char *buff = malloc(sizeof(char) * (1024));

	if (fd_src == -1)
	{
		char *err_1 = "Error: Can't read from file NAME_OF_THE_FILE\n";
		int size_1 = _strlen(err_1);

		write(STDERR_FILENO, err_1, size_1);
		exit(98);
	}
	read_src = read(fd_src, buff, 1024);
	if (read_src == -1)
	{
		char *err_2 = "Error: Can't read from file NAME_OF_THE_FILE";
		int size_2 = _strlen(err_2);

		write(STDERR_FILENO, err_2, size_2);
	}
	write(fd_dest, buff, 1024);
	close(fd_src);
	close(fd_dest);
	return (0);
}
/**
 * main - man function
 * @argc: amount of parameters
 * @argv: pointer to each parameter
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	char *serr1 = "Usage: cp file_from file_to\n";
	int size = _strlen(serr1);

	if (argc != 3)
	{
		write(STDERR_FILENO, serr1, size);
		exit(97);
	}
	cp_file_content(argv[1], argv[2]);
	return (0);
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
