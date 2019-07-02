#include "holberton.h"

void rev_string(char *s)
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
