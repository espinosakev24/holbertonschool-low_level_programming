#include "holberton.h"
/**
 * _memcpy - copy a memory area
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: unsigned int
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
		*dest = *src;
		n--;
		src++;
		dest++;
	}
	return (dest);
}
