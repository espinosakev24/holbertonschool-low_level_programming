#include "holberton.h"
#include <stdio.h>
/**
 * print_array - check the code for Holberton School students.
 * @a: pointer to array
 * @n: intenger that tells the position in an array
 * Return: Always void.
 */
void print_array(int *a, int n)
{
int b = 0;

while (b < n)
{
	if (b < n - 1)
	{
		printf("%d, ", a[b]);
	}
	else
	{
		printf("%d", a[b]);
		break;
	}
	b++;
	}
printf("\n");
}
