#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary into a dec
 * @b: pointer to the string of binary numbers
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int p2[32], a = 0, pot = 1, n = 0, result = 0;
	unsigned int n2 = 0;

	if (b == NULL)
		return (0);

	while (a < 32)
	{
		if (a == 0)
		{
			p2[a] = 1;
			a++;
			continue;
		}
			pot = pot * 2;
			p2[a] = pot;
			a++;
	}
	for (n = 0; b[n] != '\0'; n++)
	{}

	while (n > 0)
	{
		if (b[n - 1] != '0' && b[n - 1] != '1')
			return (0);

		if (b[n - 1] == '1')
		{
			result = result + p2[n2];
		}
		n--;
		n2++;
	}

	return (result);
}
