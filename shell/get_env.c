#include "holberton.h"

char **get_env(char *PATH) 
{
	int a = 0, i = 0;
	char **ev;
	char *var, *str_c;
	char **path = malloc(sizeof(char *) * 1024);

	for (ev = environ; *ev != NULL; ev++)
	{
		if (_strcmp(strtok(*ev, "="), PATH) == 0)
		{
			var = strtok(NULL, "=");
		}
	}
	while (i < 100)
	{
		path[i] = malloc(sizeof(char) * 100);
		i++;
	}

	str_c = strtok(var, ":");
	_strcpy(path[a], str_c);
	while (path[a])
	{
		a++;
		str_c = strtok(NULL, ":");
		if (!str_c)
		{
			break;
		}
		_strcpy(path[a], str_c);
	}
	path[a] = NULL;
	return (path);
}
