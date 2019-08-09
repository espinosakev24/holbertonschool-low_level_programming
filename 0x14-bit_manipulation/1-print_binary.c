#include <stdio.h>
#include "holberton.h"
/**
 * print_binary - function that print binary from dec number
 * @n: number that will be converted
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int index = 2, a = 0;

	if (n == 0)
	{
		putchar(0 + '0');
		return;
	}
	if (n == 1)
	{
		putchar(1 + '0');
	}
	while (index <= n && a < 62)
	{
		index <<= 1;
		a++;
	}
	if (a != 62)
		index >>= 1;

	while (index != 0)
	{
		if ((index & n) == 0)
		{
			putchar(0 + '0');
			a++;
		}
		else
		{
			putchar(1 + '0');
		}
		index >>= 1;
	}
}
