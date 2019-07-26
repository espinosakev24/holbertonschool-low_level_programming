#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that print strings that are passed like arguments.
 * @separator: char that separates the strings that are arguments
 * @n: amount of arguments
 * Return: 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int a = 0;
	char *s;

	va_list valist;

	va_start(valist, n);

	for (; a < n; a++)
	{
		s = va_arg(valist, char *);

		if (separator == NULL)
		{
			printf("%s", s);
		}
		else if (s == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", s);
			if (a != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(valist);
	putchar('\n');
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
print_strings(", ", 2, "Jay", "Django");
return (0);
}
