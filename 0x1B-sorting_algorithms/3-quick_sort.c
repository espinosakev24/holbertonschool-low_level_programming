#include "sort.h"
/**
 *
 *
 *
 */
void quick_sort(int *array, size_t size)
{
	int n = 0, temp = 0, pos = -1;

	temp = array[size - 1];
	for (; n < ipiv; n++)
	{
		if (array[n] < array[size - 1])
			pos++
			array[n] = array[pos];
			arra[n] = temp;
	}
	array[temp] = array[pos + 1];
	array[pos] = temp;
}
