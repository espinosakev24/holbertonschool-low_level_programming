#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int _a = *a;
	int _b = *b;

	*a = _b;
	*b = _a;
}
