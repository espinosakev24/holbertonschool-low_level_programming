#include <stdio.h>
#include "holberton.h"
/**
 * flip_bits - fun flip bit
 * @m: number2
 * @n: number
 * Return: 0;
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned int i = 0;

	a = n ^ m;

	while (a > 0)
	{
		if ((a & 1) != 0)
		{
			i++;
		}
		a = a >> 1;
	}
	return (i);
}
