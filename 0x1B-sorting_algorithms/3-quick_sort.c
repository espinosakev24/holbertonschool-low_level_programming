#include "sort.h"
/**
* quick_sort - function that sorts a list
* @array: array of ints
* @size: size of the array
* Return: Nothing
*/
void quick_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL)
	{
		return;
	}
	quick_recursive(array, size, 0, size - 1);
}
/**
 * quick_recursive - do recursion so the pivot can be reposisioned
 * @array: array of ints
 * @size: size of the array
 * @low: lower int in the array
 * @high: higher int int the array
 * Return: Nothing
 */

void quick_recursive(int *array, size_t size, int low, int high)
{
	int p = 0;

	if (low < high)
	{
		p = piv_pos(array, size, low, high);
		quick_recursive(array, size, low, p - 1);
		quick_recursive(array, size,  p + 1, high);
	}
}
/**
 * piv_pos - This function posisionates the pivote
 * @array: array of ints
 * @size: size of the array
 * @low: lower int in the array
 * @high: higher int int the array
 * Return: Nothing
 */
int piv_pos(int *array, size_t size, int low, int high)
{
	int n = low, temp,  pos;
	int pivote = array[high];

	for (pos = low; pos < high; pos++)
	{
		if (array[pos] <= pivote)
		{
			temp = array[n];
			array[n] = array[pos];
			array[pos] = temp;
			n++;
			if (n - 1 != pos)
			{
				print_array(array, size);
			}
		}
	}
	temp = array[n];
	array[n] = array[high];
	array[high] = temp;
	if (n != high)
		print_array(array, size);
	return (n);
}
