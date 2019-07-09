#include "holberton.h"
/**
 * _strstr - check the code for Holberton School students.
 * @haystack: first string
 * @needle: second string
 * Return: Always NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int size;

	a = 0;
	size = 0;

	while (needle[size] != 0)
	{
		size++;
	}


	while (*haystack != '\0')
	{
	int q = 0;
	a = 0;
		while (needle[a] != 0)
		{
			a++;
			if (*(haystack + a) == *(needle +a))
			{
				q++;
			}

		}
	if (size == q)
	{
		return (haystack);
	}
	haystack++;
	}
	return ('\0');
}
