#include "holberton.h"
char *check_path(char **paths, char *command, char **tokens)
{
	int a = 0;

	while (paths[a])
	{
		_strcat(paths[a], "/");
		_strcat(paths[a], command);
		if (access(paths[a], X_OK) == 0)
		{
			execve(paths[a], tokens, NULL);
			return (paths[a]);
		}
		a++;
	}
	return (NULL);
}
