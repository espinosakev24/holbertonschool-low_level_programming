#include <stdlib.h>
/**
 * array_range - prints buffer in hexa.
 * @min: the min value.
 * @max: the max value.
 * Return: pointer with the content of the array.
 */
int *array_range(int min, int max)
{
	int n, a;
	int *s;

	if (min > max)
	{
		return (NULL);
	}

	n = max - min + 1;

	s = malloc(sizeof(int) * n);

	if (s == 0)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++)
	{
		s[a] = min;
		min++;
	}
	return (s);
}
