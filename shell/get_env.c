#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

char *path(char *PATH) 
{
	char **ev;
	char *var;

	for (ev = environ; *ev != NULL; ev++)
	{
		if (strcmp(strtok(*ev, "="), PATH) == 0)
		{
			var = strtok(NULL, "=");
			return (var);
		}
	}
	return (NULL);
}
