#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

char **path(char *PATH) 
{
	int n = 0, a = 0;
	char **ev;
	char *var;
	/* ----- full_path needs being freed ----- */
	char **full_path = malloc(sizeof(char) * 1024);
	char *path;

	for (ev = environ; *ev != NULL; ev++)
	{
		if (_strcmp(strtok(*ev, "="), PATH) == 0)
		{
			var = strtok(NULL, "=");
		}
	}
	full_path[a] = strtok(var, ":");
	while (full_path[a] != NULL)
	{
		a++;
		full_path[a] = strtok(NULL, ":");
	}
	return (full_path);
}
int main(void)
{
	char **str = path("PATH");
	printf("%s\n", str[1]);
	return (0);
}
