#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that print a name
 * @name: name that will be printed
 * @f: function that prints
 * Return: 0 if false, something else otherwise.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
