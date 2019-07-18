#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - function that allocate memory using malloc
 * @b: amout of bytes to being saved
 * Return: Always s pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == 0)
	{
		exit(98);
	}
return (s);
}
