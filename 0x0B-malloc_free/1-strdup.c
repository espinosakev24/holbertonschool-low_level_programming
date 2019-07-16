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
	int n = 0, a, b = 0;

	while (str[b] != 0)
	{
		b++;
	}
	n = b;
	/*reserving the space in memory for s pointer*/
	s = malloc(sizeof(char) * n);

	/*Checking some requirements for the output*/
	if (str == NULL || s == NULL)
	{
		return (NULL);
	}

	/*Calculating the length of the str pointer*/
	for (n = 0; str[n] != '\0'; n++)
	{
	}

	/*copying the string of *str inside *s */
	for (a = 0; str[a]; a++)
	{
		s[a] = str[a];
	}

	return (s);
}
