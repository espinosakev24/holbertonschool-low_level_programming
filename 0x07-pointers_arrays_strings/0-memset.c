#include "holberton.h"
/**
 * _memset - fill memory with constant
 * @b: characteres
 * @n: unsigned variable
 * @s: pointer.
 * Return: s.
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

