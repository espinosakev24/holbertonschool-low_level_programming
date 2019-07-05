#include "holberton.h"
char *cap_string(char *s)
{
int a;

	a = 0;

	while (s[a] != '\0')
	{

		if ((s[a]) == ' ' || ',' || ';' || '.' || '!' || '?' || '"' || '(' || ')' || '{' || '}')
		{
			++a;
			if (s[a] >= 'a' && s[a] <= 'z')
			{
				s[a] = 'A' + (s[a] - 'a');
				continue;
			}
		}
			if (s[a] >= 'A' && s[a] <= 'Z')
			{
				s[a] = s[a] + 32;
			}
		a++;
	}
	return (s);
}
