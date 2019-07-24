#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - print the arrary intengers
 * @size: size of the array
 * @action: function that prints
 * @array: array of intengers
 * Return: 0 if false, something else otherwise.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (n < size)
	{
		action(array[n]);
		n++;
	}
}
