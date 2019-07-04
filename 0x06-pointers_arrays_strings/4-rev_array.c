#include "holberton.h"
void reverse_array(int *a, int n)
{
	int i = 0;
	int b; 

	while (i < n)
	{
		b = a[i];
		a[i] = a[n - 1];
		a[n - 1] = b;
		n--;
		i++;

	}
}
