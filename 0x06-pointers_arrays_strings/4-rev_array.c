#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int b;

	while (i < n)
	{
		b = a[i];
		a[i] = a[n - 1];
		a[n - 1] = b;
		n--;
		i++;

	}
}
