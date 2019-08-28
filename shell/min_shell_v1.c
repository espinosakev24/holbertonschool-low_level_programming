#include "holberton.h"
/**
 * main - function main - shell
 * @argc: amount of arguments of the main function
 * @argv: double pointer to each argument of the main
 * @envp: double pointer to the enviroment variable
 * Return: 0.
 */
int main(int argc, char **argv, char **envp)
{
	static int main_var = 1;
	char **tokens = malloc(sizeof(char *) * 64);
	pid_t pid_fork, child_p;
	char *buffer, *buff_2 = malloc(sizeof(char) * 1024);
	(void)argv;
	(void)argc;

	signal(SIGINT, SIG_IGN);
	buffer = malloc((sizeof(char)) * 32);
	out_memory_check(tokens);
	no_mem_ptr(buffer);
	no_mem_ptr(buff_2);
	while (main_var)
	{
		buffer = getline_tty(buff_2);
		if (*buffer == '\n')
			continue;
		sw_enter_key(buffer);
		if (strcmp(buffer, "exit") == 0)
			exit(1);
		pid_fork = fork();
		if (pid_fork == -1)
			check_negative_child(buffer);
		else if (pid_fork == 0)
		{	tokens = tok_buffer(tokens, buffer);
			if (access(tokens[0], F_OK))
			{	exec_command(tokens, buffer, envp);
				err_execve(buffer);
			}
			else
			{	execve(tokens[0], tokens, NULL);
				err_execve(buffer);
			}
		}
		else
			wait(&child_p);	}
	return (0);	}
