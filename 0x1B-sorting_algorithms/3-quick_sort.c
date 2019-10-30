#include "sort.h"
/**
 * quick_sort - function that sorts a list
 * @array: array of ints
 * @size: size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	size_t n = 0, pos = -1;
	int temp = 0;

	for (; n < size - 1; n++)
	{
		if (array[n] < array[size - 1])
		{
			pos++;
			temp = array[n];
			array[n] = array[pos];
			array[pos] = temp;
		}
	}
	temp = array[size - 1];
	array[size - 1] = array[pos + 1];
	array[pos + 1] = temp;
}
