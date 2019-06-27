#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 * @n: Variable that the program pass through the function
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
}
	_putchar('\n');
}
