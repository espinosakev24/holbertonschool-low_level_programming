#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array filled with a character
 * @size: the size of the memory to print
 * @c: char that will fill the space reserved
 * Return: pointer to the first adress reserved.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n = 0;
	char *s;

	s = malloc(sizeof(char) * size);

		if (size == 0 || s == NULL)
		{
			return (NULL);
		}

	while (n < size)
	{
		*(s + n) = c;
		n++;
	}
	return (s);
}
