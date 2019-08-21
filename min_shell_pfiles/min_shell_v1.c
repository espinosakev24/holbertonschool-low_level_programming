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
	static int main_var = 1;
	char *tokens[1024];
	int buff_size = 0, n = 1, command;
	pid_t pid_fork, child_p;
	char *buffer;
	size_t size = 32;

	buffer = malloc((sizeof(char)) * size);
	if (buffer == NULL)
		exit(1);
	/* shell with no arguments*/
	while (main_var)
	{
		printf("$ ");
		if ((getline(&buffer, &size, stdin)) == EOF)
		{
			break;
		}
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
			tokens[0] = strtok(buffer, " ");
			while ((tokens[n] = strtok(NULL, " ")))
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
