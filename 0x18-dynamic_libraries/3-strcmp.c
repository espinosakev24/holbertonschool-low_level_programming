#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 * @s1: hello
 * @s2: world!
 * Return: Always dest.
 */
int _strcmp(char *s1, char *s2)
{
int a = 0;

	while (s1[a] != '\0')
	{
		if (s1[a] < s2[a])
		{
			return (s1[a] - s2[a]);
		}
		if (s1[a] > s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}


