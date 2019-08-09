#include <stdio.h>
#include "holberton.h"
/**
 * print_binary - function that print binary from dec number
 * @n: number that will be converted
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int index = 2;
	int a = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
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
			_putchar('0');
			a++;
		}
		else
		{
			_putchar('1');
		}
		index >>= 1;
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
