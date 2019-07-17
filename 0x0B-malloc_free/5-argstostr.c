#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates
 * @ac: arguments
 * @av: p to arr of p
 * Return: pointer.
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0;
	char *s, *p;

	if (ac == 0 || av == 0)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != 0; b++)
		{
			c++;
		}
	}
	s = malloc(sizeof(char) * c + ac + 1);
	p = s;
	if (s == 0)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != 0; b++)
		{
			*s = av[a][b];
			s++;
		}
	*s = '\n';
	s++;
	}
	return (p);
}
