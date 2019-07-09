#include "holberton.h"
/**
 * _strchr - check the code for Holberton School students.
 * @s: pointer
 * @c: char to be returned
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
