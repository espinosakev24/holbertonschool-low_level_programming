#include "holberton.h"

void rev_string(char *s)
{

	char *a = s;
	char buffer[10];
	char *p = buffer;
	char *b = p;

	while (*a != '\0')
	{
		a++;
	}

	while (s < a)
	{
		a--;
		*b = *a;
		b++;
	}

	while (p < b)
	{
		*s = *p;
		s++;
		p++;
	}
}
