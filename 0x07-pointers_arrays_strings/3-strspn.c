#include "holberton.h"
/**
 * _strspn - check the code for Holberton School students.
 * @s: pointer
 * @accept: pointer to the second string
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int n;
	char *a;
	int b;

	n = 0;
	a = accept;

	while (*s != 0)
	{
	b = 0;
		while (*accept != 0)
		{
			if (*accept == *s)
			{
				n = n + 1;
				b = 1;
				break;
			}
		accept++;
		}
	if (b == 0)
	{
		break;
	}
	accept = a;
	s++;
	}
	return (n);
}

