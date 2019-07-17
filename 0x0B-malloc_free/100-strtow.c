#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - prints a grid of integers
 * @str: pointer
 *
 * Return: Nothing.
 */
char **strtow(char *str)
{
int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
