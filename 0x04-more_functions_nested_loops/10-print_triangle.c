#include "holberton.h"
void print_triangle(int size)
{
int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{

			for (b = 2; b <= size; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	}
	else
	{
	 _putchar('\n');
 }

}
