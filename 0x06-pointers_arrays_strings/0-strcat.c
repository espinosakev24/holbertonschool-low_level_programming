#include "holberton.h"
char *_strcat(char *dest, char *src)
{
	int len, n;
	n = 0;
	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[n] != '\0')
	{
		dest[len + n] = src[n];
		n++;
	}

	dest[n + len] = '\0';
return (dest);
}
