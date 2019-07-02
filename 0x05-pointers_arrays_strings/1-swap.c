#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @a: variable to being changed
 * @b: variable to being changed
 * Return: Always void.
 */
void swap_int(int *a, int *b)
{
	int _a = *a;
	int _b = *b;

	*a = _b;
	*b = _a;
}
