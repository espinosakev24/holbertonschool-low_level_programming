#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 * @s: pointer to a string
 * Return: Always void.
 */
void print_rev(char *s)
{
char *a = s;

while (*a != '\0')
{
	a++;
}
	while (s < a)
	{
		a--;
		_putchar(*a);
	}
	_putchar('\n');
}
