#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - prints a grid of integers
 * @ac: the address of the two dimensional grid
 * @av: height of the grid
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
