#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: counter of parameters
 * @argv: array of pointers
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n = 1, i = 0, result = 0;

	for (n = 1; n < argc; n++)
	{
		for (i = 0; argv[n][i] != '\0'; i++)
		{
			if (isdigit(argv[n][i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		result = result + atoi(argv[n]);
	}
	printf("%d\n", result);
	return (0);
}
