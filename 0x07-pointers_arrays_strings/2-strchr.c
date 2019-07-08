#include "holberton.h"
/**
 * _strchr - check the code for Holberton School students.
 * @s: pointer
 * @c: char to be returned
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		if (s[n] == c)
		{
			return (s + n);
		}
		n++;
	}

	return ('\0');
}
