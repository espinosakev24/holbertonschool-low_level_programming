#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints whatever thing passed through its parameter.
 * @format: format of the parameters
 */
void print_all(const char * const format, ...)
{
	va_list a;
	char *s;
	int n = 0;

	va_start(a, format);
	while (format == 0)
	{	printf("\n");
		return;
	}
	while (format[n] != 0)
	{
		switch (format[n])
		{
			case 'c':
				printf("%c", (char)va_arg(a, int));
			break;
			case 'i':
				printf("%d", va_arg(a, int));
			break;
			case 'f':
				printf("%f", (float)va_arg(a, double));
			break;
			case 's':
				s = va_arg(a, char *);
				if (s != NULL)
				{
					printf("%s", s);
					break;
				}
					printf("(nill)");
			break;
		}
		if ((format[n] == 'c' || format[n] == 'i' || format[n] == 'f' ||
		format[n] == 's') && (format[n + 1] != 0))
		{	printf(", ");
		}
	n++;
	}
	va_end(a);
	putchar('\n');
}
