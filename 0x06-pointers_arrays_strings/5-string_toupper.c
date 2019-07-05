#include "holberton.h"
/**
 * string_toupper - check the code for Holberton School students.
 * @s: pointer
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int a;

	while (s[a] != 0)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = 'A' + (s[a] - 'a');
		}
		a++;
	}
return (s);
}
