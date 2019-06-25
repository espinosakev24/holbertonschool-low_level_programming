#include "holberton.h"
/**
  * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 97; m <= 122; m++)
		{
			_putchar(m);
		}
	_putchar('\n');
	}
}
