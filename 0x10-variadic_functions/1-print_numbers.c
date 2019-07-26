#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - check the code for Holberton School students.
 * @separator: char to separate arg
 * @n: amount of arguments
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b;

	va_start(a, n);

	for (b = 0; b < n; b++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(a, const unsigned int));
		}

		else
		{
			printf("%d", va_arg(a, const unsigned int));
			if ((b != n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	putchar('\n');
}
