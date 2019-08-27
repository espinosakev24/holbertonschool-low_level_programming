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
	int n = 1;
	pid_t pid_fork, child_p;
	char *buffer, *buff_2 = malloc(sizeof(char) * 1024);

	buffer = malloc((sizeof(char)) * 32);
	if (buffer == NULL)
		exit(1);
	while (main_var)
	{	buffer = getline_tty(buff_2);
		if (*buffer == '\n')
			continue;
		sw_enter_key(buffer);
		if (strcmp(buffer, "exit") == 0)
			exit(1);
		pid_fork = fork();
		if (pid_fork == -1)
			check_negative_child(buffer);
		else if (pid_fork == 0)
		{	tokens[0] = strtok(buffer, delim);
			while ((tokens[n] = strtok(NULL, delim)))
				n++;
			main_print_env(tokens);
			exec_command(tokens, buffer);	}
		else
			wait(&child_p);	}
	return (0);	}
