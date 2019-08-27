#include "holberton.h"
/**
 * main_print_env - compares the string env and print the env variable.
 * @tokens: double pointer that points to the first string of the std input
 * Return: tokens
 */
char **main_print_env(char **tokens)
{
	char *str_env = "env";

	if (_strcmp(tokens[0], str_env) == 0)
	{
		print_env();
		exit(1);
	}
		return (tokens);
}
