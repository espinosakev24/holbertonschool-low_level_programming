#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - function that gets a bit
 * @index: position where the bit is taken
 * @n: the number
 * Return: 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);

	else
	{
		return (0);
	}
}
