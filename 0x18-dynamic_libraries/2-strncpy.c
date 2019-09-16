#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 * @dest: hello
 * @src: world!
 * @n: variable that gives values to the function
 * Return: Always dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;

a = 0;

	while ((a < n) && (src[a] != '\0'))
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
