#include "holberton.h"
/**
 * _print_rev_recursion - check the code for Holberton School students.
 * @s: pointer to a string
 * Return: Always void.
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
