#include "holberton.h"
/**
 * _memset - fill memory with constant
 * @b: the address of memory to print
 * @n: the size of the memory to print
 * @s: pointer.
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}

