#include "holberton.h"
char *string_toupper(char *s)
{
	int a;

	while (s[a] != 0)
	{
		if ( s[a] >= 'a' && 'z')
		{
			s[a] = s[a] - 32;

		}
		a++;
	}
return(s);
}
