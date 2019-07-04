#include "holberton.h"
/**
 * _strncat - check the code for Holberton School students.
 * @dest: hello
 * @src: world!
 * @n: values to the function
 * Return: Always dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	i = 0;
	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[i] != src[n + 1])
	{
		if (src[i] <= src[n])
		{
			dest[len + i] = src[i];
			i++;
		}
		break;
	}

	dest[n + len] = '\0';
return (dest);
}
