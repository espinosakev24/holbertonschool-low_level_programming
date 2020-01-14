#include "search_algos.h"

/**
 * linear_search - searches linearly the index of a value
 * @size: Size of the array
 * @value: The objective value to search its index
 * @array: array of integer
 * Return: the index of the value founded
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	if (array == NULL)
		return (-1);
	while (n < size)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (n);
		n++;
	}
	return (-1);
}
