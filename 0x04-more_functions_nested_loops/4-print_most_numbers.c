#include "holberton.h"
/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: Void.
 */
void print_most_numbers(void)
{
int n;

n = 47;

	while ((n >= 47) && (n <= 56))
	{
		n++;
		if ((n == 50) || (n == 52))
		{
			continue;
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
