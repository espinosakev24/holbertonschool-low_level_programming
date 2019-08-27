#include "holberton.h"
/**
 * exec_command - function that search a command and executes it.
 * @tokens: Is a double pointer that stores the buffer tokenized
 * @buffer: pointer that stores the string passed in the std input
 * Return: void.
 */
void exec_command(char **tokens, char *buffer)
{
	int command;
	char *str_command;

	str_command = check_path(get_env("PATH"), tokens[0], tokens);
	if (access(str_command, X_OK) == -1)
	{
		command = execve(tokens[0], tokens, NULL);
		if (command == -1)
		{	perror("Error");
			free(buffer);
			exit(EXIT_FAILURE);
		}
	}
}

