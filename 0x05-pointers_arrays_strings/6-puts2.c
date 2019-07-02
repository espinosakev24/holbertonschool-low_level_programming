#include "holberton.h"
/**
 * puts2 - check the code for Holberton School students.
 * @str: variable in which numbers are stored
 * Return: Always 0.
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
