#include "holberton.h"
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
