#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: counter of parameters
 * @argv: array of pointers
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int a = 0;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", a);
	}
	return (0);
}
