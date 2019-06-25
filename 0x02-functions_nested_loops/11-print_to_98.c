#include "holberton.h"
#include <stdio.h>
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		if(n != 98)
		{
		putchar(',');
		putchar(' ');
		}
	n++;
	}
	putchar(',');
	putchar(' ');
	while (n >= 98)
	{
		printf("%d", n);
		if(n != 98)
		{
			putchar(',');
			putchar(' ');
		}
	n--;
	}
putchar('\n');
}
