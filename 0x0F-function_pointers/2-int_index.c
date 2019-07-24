#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - check if a number is equal to 98 or -98
 * @array: array of intengers that will be checked
 * @size: size of the array.
 * @cmp: size that check the number
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;
	int a = 0;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		while (n < size)
		{
			a = cmp(array[n]);

			if (a != 0)
			{
				return (n);
			}
		n++;
	}
	}
	return (-1);
}
