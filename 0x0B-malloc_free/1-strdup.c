#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - check the code for Holberton School students.
 * @str: string that will be duplicated
 * Return: Always s if the code success.
 */
char *_strdup(char *str)
{
	char *s;
	int n = 0, a = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[n] != 0)
	{
		n++;
	}
	s = malloc(sizeof(char) * n);
	if (s == NULL)
	{
		return (NULL);
	}

	/*copying the string of *str inside *s */
	for (a = 0; str[a]; a++)
	{
		s[a] = str[a];
	}
	s[a] = a + 1;

	return (s);
}
