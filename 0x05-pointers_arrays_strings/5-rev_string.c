#include "holberton.h"

void rev_string(char *s)
{

	char *a = s;

	while (*a != '\0')
	{
		a++;
	}

	char buffer[s - a];

	char *p = buffer;

	char *b = p;

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
