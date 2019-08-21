#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
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
	size_t size = 32;

	buffer = malloc((sizeof(char)) * size);
	if (buffer == NULL)
		exit(1);
	/* shell with no arguments*/
	while (main_var)
	{
	/*Tty to command mode*/
		if (tty == 1)
			printf("$ ");
	/*__________________________________*/
		input = getline(&buffer, &size, stdin);
		if (tty == 0 && input == EOF)
			break;
		if (input == EOF)
		{
			write(1, "\n", 1);
			break;
		}
		
		if (*buffer == '\n')
			continue;
		/*Setting the last position of the buffer to '\0' character*/
		buff_size = strlen(buffer);
		buffer[buff_size - 1] = '\0';
		pid_fork = fork();
		if (pid_fork == -1)
		{	perror("Error");
			free(buffer);
			exit(1);
		}
		else if (pid_fork == 0)
		{
	/*separating the strings of the buffer and storing them in _tokens_ variable*/
			tokens[0] = strtok(buffer, delim);
			while ((tokens[n] = strtok(NULL, delim)))
			{
				n++;
			}
	/*Execute a the command from argv[0] that is stored in buffer*/
			command = execve(tokens[0], tokens, NULL);
			if (command == -1)
			{	perror("Error");
				free(buffer);
				exit(EXIT_FAILURE);
			}
		}
		else
			wait(&child_p);

	}
	/* shell with no arguments*/
	return (0);
}
