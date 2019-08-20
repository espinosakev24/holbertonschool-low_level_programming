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
	int buff_size = 0, pid, child_p;
	char *buffer, *argv[2];
	size_t size = 32;

	buffer = malloc((sizeof(char)) * size);
	if (buffer == NULL)
		exit(1);
	printf("$ ");
	argv[0] = buffer, argv[1] = NULL;
	while ((getline(&buffer, &size, stdin)) != EOF)
	{
		pid = fork();
		child_p = pid;
		if (pid == -1)
		{
			perror("Error");
			free(buffer);
			exit(1);
		}
		if (pid == 0)
		{
			buff_size = strlen(buffer);
			buffer[buff_size - 1] = '\0';
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
				free(buffer);
				exit(EXIT_FAILURE);
			}
		}
		else
			wait(&child_p);

		printf("$ ");
	}
	return (0);
}
