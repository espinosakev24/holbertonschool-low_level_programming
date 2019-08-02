#include <stdio.h>
#include "lists.h"
void startupfun(void) __attribute__((constructor));
/**
 * startupfun - Function to execueted before the main.
 *
 * Return: Void.
 */
void startupfun(void)
{
	char *str;

	str = "I bore my house upon my back!";
	printf("You're beat! and yet, you must allow,\n%s\n", str);
}
