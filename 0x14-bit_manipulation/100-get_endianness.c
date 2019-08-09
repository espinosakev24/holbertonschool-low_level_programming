#include <stdio.h>
#include "holberton.h"
/**
 * get_endianness - get endianness
 * Return: void;
 */
int get_endianness(void)
{
	int a = 0;

	if (a == 1)
		return (1);

	if (a == 0)
		return (0);

	return (a);
}
