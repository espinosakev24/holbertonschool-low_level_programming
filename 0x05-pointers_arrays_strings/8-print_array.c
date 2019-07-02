#include "holberton.h"
#include <stdio.h>
void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		if (b < n - 1)
		{
				printf("%d, ", a[b]);
		}
		else
		{
			printf("%d", a[b]);
			break;
		}
		b++;
	}
printf("\n");
}
