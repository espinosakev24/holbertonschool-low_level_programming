#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

extern char **environ;

char **get_env(char *PATH, char *full_path[500])
{
	int n = 0, a = 0, len = 0, b = 0, c = 0;
	char *ev[500];
	char *var;
	/* ----- full_path needs being freed ----- */
	char *path;

	while (environ[b] !=  NULL)
	{
		ev[b] = malloc(sizeof(char) * 1000);
		strcpy(ev[b], environ[b]);
		b++;
	}
	ev[b] = NULL;

	for (; ev[c] != NULL; c++)
	{
		if (_strcmp(strtok(ev[c], "="), PATH) == 0)
		{
			var = strtok(NULL, "=");
		}
	}
	
	path = strtok(var, ":");
	while (path)
	{
		full_path[a] = malloc(sizeof(char) * 1000);
		strcpy(full_path[a], path);
		path = strtok(NULL, ":");
		a++;
	}
		full_path[a] = NULL;
	return (full_path);
}
int main(void)
{
	int n = 0, a = 0;
	char *str[500];

	get_env("PATH", str);
	while (str[n] != NULL)
	{
		printf("%s\n", str[n]);
		n++;
	}
	while (str[a] != NULL)
	{
		free(str[a]);
		a++;
	}
	free(*str);
	return (0);
	
}
