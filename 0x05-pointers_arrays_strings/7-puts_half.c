#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 * @str: pointer to the array from 0 to 9
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int n, l;

	n = 0;
	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	while (str[n] != '\0')
	{
		if ((l % 2 == 0) && (n >= (l / 2)))
		{
			_putchar(str[n]);
		}
		else if ((l % 2 != 0) && (n >= (l - ((l - 1) / 2))))
		{
			_putchar(str[n]);
		}
	n++;
	}
_putchar('\n');
}
