#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Function that concatenate two strings.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string
 * @n: intenger that indicates the length that will be printed.
 * Return: Return the pointer created with the strings concatenated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] != 0; a++)
	{}
	for (b = 0; s2[b] != 0; b++)
	{}

	if (n >= b)
		n = b;

	s = malloc(sizeof(char) * a + b + 1);
	if (s == 0)
	{
		return (NULL);
	}

	for (c = 0; s1[c] != 0; c++)
	{
		s[c] = s1[c];
	}
	for (d = 0; d < n; d++)
	{
		s[d + c] = s2[d];
	}
	s[d + c + 1] = '\0';

	return (s);
}
