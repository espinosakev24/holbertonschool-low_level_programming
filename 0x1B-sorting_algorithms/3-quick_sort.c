#include "sort.h"
/**
 *
 *
 *
 */
void quick_sort(int *array, size_t size)
{
	int less = 0, ipiv = size - 1, n = 0;
	int pos = n - 1, temp = 0, tsize = size - 1;

	while (less < ipiv)
	{
		if (array[less] < array[ipiv])
			pos++
			temp = array[less];
			array[less] = array[gter];
			arra[gter] = temp;
			less++;
		else
			less++;
	}
	while(tsize => grter + 1)
	{
		temp = array[tsize - 1];
		array[tsize] = temp;
		if (tsize == grter + 1)
			array[grter] = array[size - 1];
	}
}
