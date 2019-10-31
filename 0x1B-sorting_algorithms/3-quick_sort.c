#include "sort.h"
/**
 * quick_sort - function that sorts a list
 * @array: array of ints
 * @size: size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	quick_recursive(array, size, -1, size - 1);
}
void quick_recursive(int *array, size_t size, size_t low, size_t high)
{
	if (low < high)
	{
		piv_pos(array, size, low, high);
		quick_recursive(array, size, low, high - 1);
		quick_recursive(array, size, low + 1, high);	
	}
}
size_t piv_pos(int *array, size_t size, size_t low, size_t high)
{
	size_t n, pos = low;
	int temp = 0;

	for (n = low; n < high; n++)
	{
		if (array[n] < array[high])
		{
			pos++;
			temp = array[n];
			array[n] = array[pos];
			array[pos] = temp;
			if (n != pos)
				print_array(array, size);
		}
	}
	temp = array[pos];
	array[pos] = array[high];
	array[high] = temp;
	if (pos != high)
		print_array(array, size);
	return (pos);
}
