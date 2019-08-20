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
	int buff_size = 0, pid, child_p, n = 1;
	char *buffer, *argv[2];
	size_t size = 32;

	buffer = malloc((sizeof(char)) * size);
	if (buffer == NULL)
		exit(1);
	/* shell with no arguments*/
	argv[0] = buffer, argv[1] = NULL;
	while (main_var)
	{
		printf("$ ");
		if ((getline(&buffer, &size, stdin)) == EOF)
		{
			main_var = 0;
			continue;
		}
		pid = fork();
		if (pid == -1)
		{	perror("Error");
			free(buffer);
			exit(1);
		}
		else if (pid == 0)
		{
			tokens[0] = strtok(buffer, " ");
			while ((tokens[n] = strtok(NULL, " ")))
			{
				n++;
			}
			printf("%s\n", tokens[2]);
			buff_size = strlen(buffer);
			buffer[buff_size - 1] = '\0';
			if (execve(argv[0], argv, NULL) == -1)
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
