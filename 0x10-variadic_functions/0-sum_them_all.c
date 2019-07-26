#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that adds all its parameters.
 * @n: amount of arguments
 * Return: the addition of its arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int add = 0;
	unsigned int a;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		add += va_arg(valist, const unsigned int);
	}
	va_end(valist);
	return (add);
}
