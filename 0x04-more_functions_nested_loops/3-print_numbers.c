#include "holberton.h"
/**
 * print_numbers - check the code for Holberton School students.
 *
 * Return: Void.
 */
void print_numbers(void)
{
int n;

n = 48;

	while ((n >= 48) && (n <= 57))
	{
		_putchar(n);
		n++;
	}
_putchar('\n');
}
