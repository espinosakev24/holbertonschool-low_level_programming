#include "holberton.h"
/**
 * _strpbrk - check the code for Holberton School students.
 * @s: pointer first string
 * @accept: pointer to the second string
 * Return: Always s.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	a = accept;

	while (*s != 0)
	{
		while (*accept != 0)
		{
			if (*accept == *s)
			{
				return (s);
			}
		accept++;
		}
	accept = a;
	s++;
	}
	return (s);
}
