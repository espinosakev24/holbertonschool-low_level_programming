#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 *
 * Return: Void
 */
void print_line(int n)
{
int a;

if (n > 0)
{
	for (a = 0; a < n; a++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
else
{
	_putchar('\n');
}
}
