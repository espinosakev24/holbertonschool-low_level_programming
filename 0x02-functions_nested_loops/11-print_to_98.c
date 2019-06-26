#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - check the code for Holberton School students.
 * @n: any position to 98
 * Return: Always numbers to 98.
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		if (n != 98)
		{
		printf("%d, ", n);
		}
		else
		{
		printf("%d\n", n);
		}
	n++;
	}
	while (n >= 98)
	{
		if (n != 98)
		{
		printf("%d, ", n);
		}
		else
		{
		printf("%d\n", n);
		}
	n--;
	}
}
