#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: s pointer with the space filled with 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	unsigned int *s;

	if (nmemb == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * (sizeof(size)));
	if (s == 0)
		return (0);

	for (n = 0; s[n] != 0; n++)
	{
		s[n] = 0;
	}
	return (s);
}
