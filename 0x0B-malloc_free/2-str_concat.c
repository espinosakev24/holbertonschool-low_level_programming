#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - check the code for Holberton School students.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: *s if the function no fail.
 */
char *str_concat(char *s1, char *s2)
{
	int _s1 = 0, _s2 = 0;
	int a = 0, b = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[_s1] != 0)
	{
		_s1++;
	}
	while (s2[_s2] != '\0')
	{
		_s2++;
	}

	s = malloc(sizeof(char) * (_s1 + _s2 + 1));
	if (s == 0)
	{
		return (NULL);
	}

	while (s1[a] != '\0')
	{
		s[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		s[a + b] = s2[b];
		b++;
	}
	s[a + b + 1] = '\0';
	return (s);
}
