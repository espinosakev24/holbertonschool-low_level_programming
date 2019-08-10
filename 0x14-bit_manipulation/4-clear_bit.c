#include <stdio.h>
#include "holberton.h"
/**
 * clear_bit - function that clears a bit
 * @index: index of the function
 * @n: pointer to the number
 * Return: 0;
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 64)
		return (-1);

	a = 1 << index;
	*n &= ~a;
	return (1);
}
