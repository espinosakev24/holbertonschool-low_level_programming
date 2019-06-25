#include "holberton.h"
int man(void)
{
int n;

n = 97;

while(n < 122)
{
	_putchar(n);
	n++;
}
_putchar('\n');
return(0);
}
