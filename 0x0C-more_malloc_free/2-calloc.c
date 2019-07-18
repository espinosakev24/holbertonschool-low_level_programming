#include <stdio.h>
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	unsigned int *s;
	
	if (nmemb == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * (sizeof(size)));
	if (s == 0)
		return (0);

	for (n = 0; s[n] != 0; n++)
	{
		s[n] = 0;
	}
	return (s);
}
