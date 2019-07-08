#include "holberton.h"
/**
 * _strstr - check the code for Holberton School students.
 * @haystack: first string
 * @needle: second string
 * Return: Always NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int n;

	n = 0;

	while (haystack[n] != '\0')
	{
		if (haystack[n] == needle[0])
		{
			return (haystack + n);
		}
	n++;
	}
	return ('\0');
}
