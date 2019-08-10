#include <stdio.h>
#include "holberton.h"
/**
 * set_bit - function that sets a bit to 1
 * @index: index of the function
 * @n: pointer to the number
 * Return: 0;
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 64)
		return (-1);
	a = 1 << index;
	*n = *n | a;
	return (1);
}
