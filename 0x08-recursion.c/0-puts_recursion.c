#include "holberton.h"
/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: pointer
 * Return: Always s.
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
_puts_recursion(s);
}
