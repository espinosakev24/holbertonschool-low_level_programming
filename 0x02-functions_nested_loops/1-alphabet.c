#include "holberton.h"
/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: Always void.
 */
void print_alphabet(void)
{
int n;

n = 97;

while (n < 123)
{
	_putchar(n);
	n++;
}
_putchar('\n');

}
