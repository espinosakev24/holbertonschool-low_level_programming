#include "search_algos.h"
/**
 * binary_search - searches bineraly a value in an array
 * @size: Size of the array
 * @value: The objective value to search its index
 * @array: array of integer
 * Return: the index of the value founded
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int low = 0, high = size - 1, mid;

    if (array == NULL)
        return (-1);
	while (low <= high)
	{
		PrintArray(array, low, high);
		printf("\n");
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
/**
 * PrintArray - print array from index to size
 * @index: Size of the array
 * @size: size of the array to print
 * @array: array of integer
 * Return: nothing
 */
void PrintArray(int *array, int index, int size)
{
	printf("Searching in array: ");
	while (index <= size)
	{
		if (index == size)
			printf("%d", array[index]);
		else
		{
			printf("%d, ", array[index]);
		}
		index++;
	}
}
