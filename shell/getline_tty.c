#include "holberton.h"
char *getline_tty(char *buffer)
{
	int tty = isatty(STDIN_FILENO);
	size_t size = 32;
	int input;

	if (tty == 1)
	{
		printf("Cisfun$ ");
	}
	input = getline(&buffer, &size, stdin);
	if (tty == 0 && input == EOF)
		exit(0);

	if (input == EOF)
	{
		write(1, "\n", 1);
		exit(0);
	}
	return (buffer);
}
