#include "holberton.h"
/**
 * get_env - function that tokenizes the env variable
 * @PATH: key to extract the value
 * Return: value of the key
 */
char **get_env(char *PATH)
{
	int a = 0, i = 0;
	char **ev;
	char *var, *str_c;
	char **path = malloc(sizeof(char *) * 1024);
	char **cp_env = malloc(sizeof(char *) * 1024);

	while (i < 100)
	{	cp_env[i] = malloc(sizeof(char) * 100);
		i++;	}
	i = 0;
	while (environ[a])
	{	_strcpy(cp_env[a], environ[a]);
		a++;	}
	a = 0;
	for (ev = cp_env; *ev != NULL; ev++)
	{
		if (_strcmp(strtok(*ev, "="), PATH) == 0)
		{	var = strtok(NULL, "=");
			break;	}
	}
	while (i < 100)
	{	path[i] = malloc(sizeof(char) * 100);
		i++;	}

	str_c = strtok(var, ":");
	_strcpy(path[a], str_c);
	while (path[a])
	{	a++;
		str_c = strtok(NULL, ":");
		if (!str_c)
			break;
		_strcpy(path[a], str_c);
	}
	path[a] = NULL;
	return (path);	}