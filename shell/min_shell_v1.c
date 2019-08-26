#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include "holberton.h"
/**
 * main - function main - shell
 * Return: 0.
 */
int main(void)
{
	char *delim = " \n\t\a";
	static int main_var = 1;
	char *tokens[1024];
	int tty = isatty(STDIN_FILENO);
	int buff_size = 0, n = 1, command, input;
	pid_t pid_fork, child_p;
	char *buffer; 
	char **path;
	char *str_command;
	size_t size = 32;

	buffer = malloc((sizeof(char)) * size);
	if (buffer == NULL)
		exit(1);
	while (main_var)
	{
	/*__ISATTY__ : using isatty to run the shell in command and interact mode*/
		if (tty == 1)
			printf("Arbolets$ ");
		input = getline(&buffer, &size, stdin);
		if (tty == 0 && input == EOF)
			break;
		if (input == EOF)
		{
			write(1, "\n", 1);
			break;
		}
	/*__PRESS_ENTER__ : if press enter(\n) nothing happens*/	
		if (*buffer == '\n')
			continue;
	/*__REMOVING_\n__ : Setting the last position of the buffer to '\0' character*/
		buff_size = _strlen(buffer);
		buffer[buff_size - 1] = '\0';
	/*__EXIT__ : ending the shell with exit*/
		if (strcmp(buffer, "exit") == 0)
			exit(1);
	/*__USING_FORK__ creating child proccess*/
		pid_fork = fork();
		if (pid_fork == -1)
		{	perror("Error");
			free(buffer);
			exit(1);
		}
		else if (pid_fork == 0)
		{
	/* __TOKENIZING_BUFFER__ : storing buffer strings in _tokens_ variable*/
			tokens[0] = strtok(buffer, delim);
			while ((tokens[n] = strtok(NULL, delim)))
			{
				n++;
			}
	/*__PRINTENV__ : print the env when typing "env" word*/
			if (_strcmp(tokens[0], "env") == 0)
			{
				print_env();
				break;
			}
	/*__EXECUTE_COMMANDS__ : Execute command with arguments*/
			str_command = check_path(get_env("PATH"), tokens[0], tokens);
			if (access(str_command, X_OK) == -1);
			{
				command = execve(tokens[0], tokens, NULL);
				if (command == -1)
				{	perror("Error");
					free(buffer);
					exit(EXIT_FAILURE);
				}
			}
		}
	/*__FORK_CHILD_END__ : child proccess is finished*/
		else
			wait(&child_p);

	}
	return (0);
}
