#include "holberton.h"
#include <stdio.h>
/**
 * print_sign - check the code for Holberton School students.
 * @n:is a intenger
 * Return: Always 1 or 0 or -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
