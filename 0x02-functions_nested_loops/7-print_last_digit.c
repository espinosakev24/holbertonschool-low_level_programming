#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 * @n: the last digit and always abs
 * Return: Always absolute number and the last digit.
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(48 + n);
	return (n);
}
