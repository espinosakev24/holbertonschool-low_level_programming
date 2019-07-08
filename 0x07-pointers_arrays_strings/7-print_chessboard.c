#include "holberton.h"
/**
 * print_chessboard - check the code for Holberton School students.
 * @a: array
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int c;
	int r;


	for (c = 0; c < 8; c++)
	{
		for (r = 0; r < 8; r++)
		{
			_putchar(a[c][r]);
			if (r == 7)
				_putchar('\n');
		}
	}
}
