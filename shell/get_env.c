#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

char *path(char *PATH) 
{
	int n = 0;
	char **ev;
	char *var;
	char *path;

	for (ev = environ; *ev != NULL; ev++)
	{
		if (strcmp(strtok(*ev, "="), PATH) == 0)
		{
			var = strtok(NULL, "=");
		}
	}
	path = strtok(var, ":");
	return (path);
}
int main(void)
{
	printf("%s\n", path("PATH"));
	return (0);
}
