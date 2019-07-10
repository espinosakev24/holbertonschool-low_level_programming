#include "holberton.h"
/**
 * factorial - check the code for Holberton School students.
 * @n: variable
 * Return: Always factorial.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}


